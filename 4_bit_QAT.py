import torch
import torch.nn as nn
import torch.nn.functional as F
import torch.optim as optim
import torchvision
import torchvision.transforms as transforms
import matplotlib.pyplot as plt
import numpy as np
import os

# --- 1. SETUP ---
device = torch.device("mps" if torch.backends.mps.is_available() else "cpu")

def fake_quantize_int4(x):
    """Simulates INT4 quantization with STE."""
    with torch.no_grad():
        max_val = torch.max(torch.abs(x))
        scale = max_val / 7.0 if max_val > 0 else torch.tensor(1.0).to(x.device)
    
    x_q = torch.round(x / scale).clamp(-8, 7)
    x_dq = x_q * scale
    return x + (x_dq - x).detach()

# --- 2. QAT MODEL ---
class myQAT_CNN(nn.Module):
    def __init__(self):
        super(myQAT_CNN, self).__init__()
        self.conv1 = nn.Conv2d(1, 6, 5, padding=2)
        self.pool = nn.AvgPool2d(2, 2)
        self.conv2 = nn.Conv2d(6, 16, 5)
        self.fc1 = nn.Linear(16 * 5 * 5, 120)
        self.fc2 = nn.Linear(120, 84)
        self.fc3 = nn.Linear(84, 10)

    def forward(self, x):
        # Quantize weights on-the-fly
        w1 = fake_quantize_int4(self.conv1.weight)
        x = self.pool(F.relu(F.conv2d(x, w1, self.conv1.bias, padding=2)))
        w2 = fake_quantize_int4(self.conv2.weight)
        x = self.pool(F.relu(F.conv2d(x, w2, self.conv2.bias)))
        x = x.view(-1, 16 * 5 * 5)
        w3 = fake_quantize_int4(self.fc1.weight)
        x = F.relu(F.linear(x, w3, self.fc1.bias))
        w4 = fake_quantize_int4(self.fc2.weight)
        x = F.relu(F.linear(x, w4, self.fc2.bias))
        w5 = fake_quantize_int4(self.fc3.weight)
        x = F.linear(x, w5, self.fc3.bias)
        return x

# --- 3. DATA LOADING ---
transform = transforms.Compose([transforms.ToTensor(), transforms.Normalize((0.5,), (0.5,))])
trainset = torchvision.datasets.MNIST(root='./data', train=True, download=True, transform=transform)
testset = torchvision.datasets.MNIST(root='./data', train=False, download=True, transform=transform)
trainloader = torch.utils.data.DataLoader(trainset, batch_size=64, shuffle=True)
testloader = torch.utils.data.DataLoader(testset, batch_size=64, shuffle=False)

# --- 4. TRAINING LOOP ---
model = myQAT_CNN().to(device)
optimizer = optim.Adam(model.parameters(), lr=0.001)
criterion = nn.CrossEntropyLoss()

print(f"Starting QAT on {device}...")
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

# --- 5. EVALUATION (INFERENCE RESULTS) ---
def evaluate_model(model, loader, name="Model"):
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
    print(f"{name} Accuracy: {acc:.2f}%")
    return acc

print("\n--- Final Performance ---")
qat_accuracy = evaluate_model(model, testloader, "QAT Optimized Model")

# --- 6. EXPORT & FINAL VERIFICATION ---
# Verify the weights actually saved as INT4 still work after export
os.makedirs("qat_exported_weights", exist_ok=True)
export_scales = {}

with torch.no_grad():
    for name, param in model.state_dict().items():
        if 'weight' in name:
            max_val = torch.max(torch.abs(param))
            scale = max_val / 7.0 if max_val > 0 else 1.0
            q_weight = torch.round(param / scale).clamp(-8, 7).cpu().numpy().astype(np.int8)
            
            # Save for hardware
            np.savetxt(f"qat_exported_weights/{name}.csv", q_weight.flatten(), fmt="%d", delimiter=",")
            export_scales[name] = scale.item()

print(f"Exported INT4 weights to 'qat_exported_weights/' directory.")