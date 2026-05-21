import torch
import torch.nn as nn
import torch.nn.functional as F
import torch.optim as optim
import torchvision
import torchvision.transforms as transforms
import numpy as np
import os
import math

# --- 1. SETUP ---
device = torch.device("mps" if torch.backends.mps.is_available() else "cpu")

def hardware_friendly_quantize_int4(x):
    """
    Simulates 4-bit quantization using Power-of-Two scaling.
    This allows FPGA implementation using bit-shifts instead of division.
    """
    if torch.max(torch.abs(x)) == 0:
        return x
    
    with torch.no_grad():
        # Find the max value to determine the range
        max_val = torch.max(torch.abs(x))
        # Calculate the ideal floating point scale
        ideal_scale = max_val / 8.0
        # Snap the scale to the nearest power of two: 2^n
        # On FPGA: x / 2^n  is just  x >> n
        log_scale = torch.round(torch.log2(ideal_scale))
        pow2_scale = torch.pow(2, log_scale)

    # Quantize: Round(x / 2^n)
    x_q = torch.round(x / pow2_scale).clamp(-8, 7)
    # Dequantize for training (STE)
    x_dq = x_q * pow2_scale
    
    # x_q = \text{clamp} \left( \left\lfloor \frac{x}{2^{\text{round}(\log_2(|x|_{\text{max}}/8))}} \right\rceil, -8, 7 \right)
    
    # Straight-Through Estimator (STE)
    return x + (x_dq - x).detach()

# --- 2. QAT MODEL ---
class FPGAFriendlyQAT(nn.Module):
    def __init__(self):
        super(FPGAFriendlyQAT, self).__init__()
        self.conv1 = nn.Conv2d(1, 6, 5, padding=2)
        self.pool = nn.AvgPool2d(2, 2)
        self.conv2 = nn.Conv2d(6, 16, 5)
        self.fc1 = nn.Linear(16 * 5 * 5, 120)
        self.fc2 = nn.Linear(120, 84)
        self.fc3 = nn.Linear(84, 10)

    def forward(self, x):
        # Quantize weights using bit-shift friendly scaling
        w1 = hardware_friendly_quantize_int4(self.conv1.weight)
        x = self.pool(F.relu(F.conv2d(x, w1, self.conv1.bias, padding=2)))
        
        w2 = hardware_friendly_quantize_int4(self.conv2.weight)
        x = self.pool(F.relu(F.conv2d(x, w2, self.conv2.bias)))
        
        x = x.view(-1, 16 * 5 * 5)
        
        w3 = hardware_friendly_quantize_int4(self.fc1.weight)
        x = F.relu(F.linear(x, w3, self.fc1.bias))
        
        w4 = hardware_friendly_quantize_int4(self.fc2.weight)
        x = F.relu(F.linear(x, w4, self.fc2.bias))
        
        w5 = hardware_friendly_quantize_int4(self.fc3.weight)
        x = F.linear(x, w5, self.fc3.bias)
        return x

# --- 3. DATA LOADING ---
transform = transforms.Compose([transforms.ToTensor(), transforms.Normalize((0.5,), (0.5,))])
trainset = torchvision.datasets.MNIST(root='./data', train=True, download=True, transform=transform)
testset = torchvision.datasets.MNIST(root='./data', train=False, download=True, transform=transform)
trainloader = torch.utils.data.DataLoader(trainset, batch_size=64, shuffle=True)
testloader = torch.utils.data.DataLoader(testset, batch_size=64, shuffle=False)

# --- 4. EVALUATION FUNCTION ---
def evaluate(model, loader):
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
    return 100 * correct / total

# --- 5. TRAINING LOOP ---
model = FPGAFriendlyQAT().to(device)
optimizer = optim.Adam(model.parameters(), lr=0.001)
criterion = nn.CrossEntropyLoss()

print(f"Starting Hardware-Optimized QAT on {device}...")
for epoch in range(5):
    model.train()
    running_loss = 0.0
    for images, labels in trainloader:
        images, labels = images.to(device), labels.to(device)
        optimizer.zero_grad()
        outputs = model(images)
        loss = criterion(outputs, labels)
        loss.backward()
        optimizer.step()
        running_loss += loss.item()
    
    # Calculate Training Accuracy at end of epoch
    train_acc = evaluate(model, trainloader)
    print(f"Epoch {epoch+1} | Loss: {running_loss/len(trainloader):.4f} | Train Acc: {train_acc:.2f}%")

# --- 6. FINAL INFERENCE ACCURACY ---
inference_acc = evaluate(model, testloader)
print(f"\n--- Final Performance ---")
print(f"Inference Accuracy (Test Set): {inference_acc:.2f}%")

# --- 7. EXPORT FOR FPGA ---
os.makedirs("fpga_weights_int4", exist_ok=True)
print(f"\nExporting INT4 weights and shift factors...")

with torch.no_grad():
    for name, param in model.state_dict().items():
        if 'weight' in name:
            max_val = torch.max(torch.abs(param))
            ideal_scale = max_val / 7.0 if max_val > 0 else 1.0
            log_scale = torch.round(torch.log2(ideal_scale))
            pow2_scale = torch.pow(2, log_scale)
            
            # Integer weights for CSV
            q_weight = torch.round(param / pow2_scale).clamp(-8, 7).cpu().numpy().astype(np.int8)
            
            # Save weights
            np.savetxt(f"fpga_weights_int4/{name}.csv", q_weight.flatten(), fmt="%d")
            # Save the shift factor (n in 2^n)
            print(f"Layer: {name} | Bit-shift (n): {int(log_scale.item())}")

print(f"\nDone! Weights saved to 'fpga_weights_int4/' directory.")