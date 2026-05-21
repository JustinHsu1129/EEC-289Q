import torch
import torch.nn as nn
import torch.nn.functional as F
import torch.optim as optim
import torchvision
import torchvision.transforms as transforms
import numpy as np
import os

# --- 1. SETUP ---
# Detect device (MPS for Mac, CUDA for Nvidia, or CPU)
device = torch.device("cuda" if torch.cuda.is_available() else "mps" if torch.backends.mps.is_available() else "cpu")

def fake_quantize_int4(x):
    """Simulates INT4 quantization with Straight-Through Estimator (STE)."""
    with torch.no_grad():
        max_val = torch.max(torch.abs(x))
        # INT4 range is -8 to 7. We scale relative to 7.
        scale = max_val / 7.0 if max_val > 0 else torch.tensor(1.0).to(x.device)
    
    # Quantize and Dequantize
    x_q = torch.round(x / scale).clamp(-8, 7)
    x_dq = x_q * scale
    # STE: gradient passes through as if this were an identity function
    return x + (x_dq - x).detach()

# --- 2. OPTIMIZED QAT MODEL ---
class FPGAOptimizedQAT(nn.Module):
    def __init__(self):
        super(FPGAOptimizedQAT, self).__init__()
        # Changed from 5x5 to 3x3 for FPGA efficiency
        # Padding=1 maintains spatial dimensions (28x28 -> 28x28)
        self.conv1 = nn.Conv2d(1, 8, 3, padding=1) 
        self.pool = nn.MaxPool2d(2, 2)
        self.conv2 = nn.Conv2d(8, 16, 3, padding=1)
        
        # After two 2x2 pools, 28x28 becomes 7x7
        self.fc1 = nn.Linear(16 * 7 * 7, 64) 
        self.fc2 = nn.Linear(64, 10)

    def forward(self, x):
        # Layer 1: Conv 3x3 + Quantized Weights
        w1 = fake_quantize_int4(self.conv1.weight)
        x = self.pool(F.relu(F.conv2d(x, w1, self.conv1.bias, padding=1)))
        
        # Layer 2: Conv 3x3 + Quantized Weights
        w2 = fake_quantize_int4(self.conv2.weight)
        x = self.pool(F.relu(F.conv2d(x, w2, self.conv2.bias, padding=1)))
        
        # Flatten
        x = x.view(-1, 16 * 7 * 7)
        
        # Fully Connected Layers
        w3 = fake_quantize_int4(self.fc1.weight)
        x = F.relu(F.linear(x, w3, self.fc1.bias))
        
        w4 = fake_quantize_int4(self.fc2.weight)
        x = F.linear(x, w4, self.fc2.bias)
        return x

# --- 3. DATA LOADING ---
transform = transforms.Compose([transforms.ToTensor(), transforms.Normalize((0.5,), (0.5,))])
trainset = torchvision.datasets.MNIST(root='./data', train=True, download=True, transform=transform)
testset = torchvision.datasets.MNIST(root='./data', train=False, download=True, transform=transform)
trainloader = torch.utils.data.DataLoader(trainset, batch_size=64, shuffle=True)
testloader = torch.utils.data.DataLoader(testset, batch_size=64, shuffle=False)

# --- 4. TRAINING LOOP ---
model = FPGAOptimizedQAT().to(device)
optimizer = optim.Adam(model.parameters(), lr=0.001)
criterion = nn.CrossEntropyLoss()

print(f"Starting QAT (3x3 Kernels) on {device}...")
model.train()
for epoch in range(5):
    running_loss = 0.0
    for images, labels in trainloader:
        images, labels = images.to(device), labels.to(device)
        optimizer.zero_grad()
        outputs = model(images)
        loss = criterion(outputs, labels)
        loss.backward()
        optimizer.step()
        running_loss += loss.item()
    print(f"Epoch {epoch+1} Loss: {running_loss/len(trainloader):.4f}")

# --- 5. EVALUATION ---
def evaluate_model(model, loader):
    model.eval()
    correct = 0
    total = 0
    with torch.no_grad():
        for images, labels in loader:
            images, labels = images.to(device), labels.to(device)
            outputs = model(images)
            _, predicted = torch.max(outputs, 1)
            total += labels.size(0)
            correct += (predicted == labels).sum().item()
    acc = 100 * correct / total
    print(f"Final QAT Accuracy: {acc:.2f}%")

evaluate_model(model, testloader)

# --- 6. EXPORT INT4 WEIGHTS ---
os.makedirs("fpga_weights_3x3", exist_ok=True)
with torch.no_grad():
    for name, param in model.state_dict().items():
        if 'weight' in name:
            max_val = torch.max(torch.abs(param))
            scale = max_val / 7.0 if max_val > 0 else 1.0
            # Convert to INT8 container for storage, but values are restricted to 4-bit range
            q_weight = torch.round(param / scale).clamp(-8, 7).cpu().numpy().astype(np.int8)
            np.savetxt(f"fpga_weights_3x3/{name}.csv", q_weight.flatten(), fmt="%d", delimiter=",")

print("Export complete. 3x3 kernels are significantly easier to unroll in Verilog/HLS!")