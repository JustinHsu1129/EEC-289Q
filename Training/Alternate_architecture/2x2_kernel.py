import torch
import torch.nn as nn
import torch.nn.functional as F
import torch.optim as optim
import torchvision
import torchvision.transforms as transforms
import numpy as np
import os

# --- 1. SETUP ---
device = torch.device("cuda" if torch.cuda.is_available() else "mps" if torch.backends.mps.is_available() else "cpu")

def fake_quantize_int4(x):
    """Simulates INT4 quantization with STE."""
    with torch.no_grad():
        max_val = torch.max(torch.abs(x))
        scale = max_val / 7.0 if max_val > 0 else torch.tensor(1.0).to(x.device)
    x_q = torch.round(x / scale).clamp(-8, 7)
    x_dq = x_q * scale
    return x + (x_dq - x).detach()

# --- 2. 2x2 KERNEL QAT MODEL ---
class FPGAUltraLightQAT(nn.Module):
    def __init__(self):
        super(FPGAUltraLightQAT, self).__init__()
        # Kernel size 2x2. 
        # Using padding=0 or 1 depends on how you want to handle the 'center'.
        # With 2x2 and padding=0, 28x28 becomes 27x27.
        self.conv1 = nn.Conv2d(1, 8, 2, padding=0) 
        self.pool = nn.MaxPool2d(2, 2)
        self.conv2 = nn.Conv2d(8, 16, 2, padding=0)
        
        # Calculation for Flattening:
        # 28x28 -> (Conv 2x2) -> 27x27 -> (Pool 2x2) -> 13x13
        # 13x13 -> (Conv 2x2) -> 12x12 -> (Pool 2x2) -> 6x6
        self.fc1 = nn.Linear(16 * 6 * 6, 64) 
        self.fc2 = nn.Linear(64, 10)

    def forward(self, x):
        # Layer 1
        w1 = fake_quantize_int4(self.conv1.weight)
        x = self.pool(F.relu(F.conv2d(x, w1, self.conv1.bias, padding=0)))
        
        # Layer 2
        w2 = fake_quantize_int4(self.conv2.weight)
        x = self.pool(F.relu(F.conv2d(x, w2, self.conv2.bias, padding=0)))
        
        # Flatten
        x = x.view(-1, 16 * 6 * 6)
        
        # FC Layers
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

# --- 4. TRAINING ---
model = FPGAUltraLightQAT().to(device)
optimizer = optim.Adam(model.parameters(), lr=0.001)
criterion = nn.CrossEntropyLoss()

print(f"Starting QAT (2x2 Kernels) on {device}...")
model.train()
for epoch in range(5):
    running_loss = 0.0
    for images, labels in trainloader:
        images, labels = images.to(device), labels.to(device)
        optimizer.zero_grad()
        loss = criterion(model(images), labels)
        loss.backward()
        optimizer.step()
        running_loss += loss.item()
    print(f"Epoch {epoch+1} Loss: {running_loss/len(trainloader):.4f}")

# --- 5. EVALUATION ---
model.eval()
correct, total = 0, 0
with torch.no_grad():
    for images, labels in testloader:
        images, labels = images.to(device), labels.to(device)
        _, predicted = torch.max(model(images), 1)
        total += labels.size(0)
        correct += (predicted == labels).sum().item()
print(f"Final 2x2 Model Accuracy: {100 * correct / total:.2f}%")

# --- 6. EXPORT ---
os.makedirs("fpga_weights_2x2", exist_ok=True)
with torch.no_grad():
    for name, param in model.state_dict().items():
        if 'weight' in name:
            max_val = torch.max(torch.abs(param))
            scale = max_val / 7.0 if max_val > 0 else 1.0
            q_weight = torch.round(param / scale).clamp(-8, 7).cpu().numpy().astype(np.int8)
            np.savetxt(f"fpga_weights_2x2/{name}.csv", q_weight.flatten(), fmt="%d", delimiter=",")