import torch
import torch.nn as nn
import torch.nn.functional as F
import torch.optim as optim
import torchvision
import torchvision.transforms as transforms
import numpy as np
import os

device = torch.device("mps" if torch.backends.mps.is_available() else "cpu")

def binarize_weights(x):
    """Sign function with STE."""
    x_b = torch.sign(x)
    x_b[x_b == 0] = 1
    return x + (x_b - x).detach()

class MyBinaryCNN(nn.Module):
    def __init__(self):
        super(MyBinaryCNN, self).__init__()
        # Adding BatchNorm layers to stabilize 1-bit training
        self.conv1 = nn.Conv2d(1, 16, 5, padding=2)
        self.bn1 = nn.BatchNorm2d(16)
        
        self.conv2 = nn.Conv2d(16, 32, 5)
        self.bn2 = nn.BatchNorm2d(32)
        
        self.fc1 = nn.Linear(32 * 5 * 5, 128)
        self.bn3 = nn.BatchNorm1d(128)
        
        self.fc2 = nn.Linear(128, 10)

    def forward(self, x):
        # Layer 1
        w1 = binarize_weights(self.conv1.weight)
        x = F.conv2d(x, w1, self.conv1.bias, padding=2)
        x = self.bn1(x)
        x = F.avg_pool2d(F.relu(x), 2)

        # Layer 2
        w2 = binarize_weights(self.conv2.weight)
        x = F.conv2d(x, w2, self.conv2.bias)
        x = self.bn2(x)
        x = F.avg_pool2d(F.relu(x), 2)

        x = x.view(-1, 32 * 5 * 5)

        # FC 1
        w3 = binarize_weights(self.fc1.weight)
        x = F.linear(x, w3, self.fc1.bias)
        x = self.bn3(x)
        x = F.relu(x)

        # FC 2 - Output layer (usually kept higher precision or INT8)
        x = self.fc2(x)
        return x

# --- DATA & TRAINING ---
transform = transforms.Compose([transforms.ToTensor(), transforms.Normalize((0.5,), (0.5,))])
trainset = torchvision.datasets.MNIST(root='./data', train=True, download=True, transform=transform)
testset = torchvision.datasets.MNIST(root='./data', train=False, download=True, transform=transform)
trainloader = torch.utils.data.DataLoader(trainset, batch_size=128, shuffle=True)
testloader = torch.utils.data.DataLoader(testset, batch_size=128, shuffle=False)

model = MyBinaryCNN().to(device)
# BNNs need a larger learning rate initially to overcome the binary threshold
optimizer = optim.Adam(model.parameters(), lr=0.01)
criterion = nn.CrossEntropyLoss()

print(f"Starting 1-Bit Training (Fixed) on {device}...")
model.train()
for epoch in range(10):
    total_loss = 0
    for images, labels in trainloader:
        images, labels = images.to(device), labels.to(device)
        optimizer.zero_grad()
        outputs = model(images)
        loss = criterion(outputs, labels)
        loss.backward()
        optimizer.step()
        total_loss += loss.item()
    print(f"Epoch {epoch+1}, Avg Loss: {total_loss/len(trainloader):.4f}")

# --- EVALUATION ---
model.eval()
correct = 0
total = 0
with torch.no_grad():
    for images, labels in testloader:
        images, labels = images.to(device), labels.to(device)
        outputs = model(images)
        _, predicted = torch.max(outputs, 1)
        total += labels.size(0)
        correct += (predicted == labels).sum().item()

print(f"\nFixed 1-Bit Accuracy: {100 * correct / total:.2f}%")

export_dir = "binary_hw_export"
os.makedirs(export_dir, exist_ok=True)

print(f"\nExporting weights to {export_dir}...")

model.eval()
with torch.no_grad():
    for name, param in model.state_dict().items():
        # Handle Weights: Convert -1/+1 to 0/1 bits
        if 'weight' in name and 'bn' not in name:
            # We use sign(x) to get -1 or 1, then map to 0 or 1
            binary_repr = (torch.sign(param) >= 0).cpu().numpy().astype(np.uint8)
            file_path = f"{export_dir}/{name.replace('.', '_')}.csv"
            np.savetxt(file_path, binary_repr.flatten(), fmt="%d")
            print(f"Saved Binary Weight: {file_path}")
            
        # Handle Biases and BatchNorm: Save as Float32 for high-precision logic
        else:
            file_path = f"{export_dir}/{name.replace('.', '_')}.csv"
            np.savetxt(file_path, param.cpu().numpy().flatten(), delimiter=",")
            print(f"Saved Float Parameter: {file_path}")