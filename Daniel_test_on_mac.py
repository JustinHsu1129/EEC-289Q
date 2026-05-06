import torch
import torch.nn as nn
import torch.nn.functional as F
import torch.optim as optim
import torchvision
import torchvision.transforms as transforms
import matplotlib.pyplot as plt
import numpy as np
import os

# --- M2 MAC DEVICE SETUP ---
# Check for Metal Performance Shaders (MPS) availability
if torch.backends.mps.is_available():
    device = torch.device("mps")
    print("Using device: MPS (M2 GPU)")
elif torch.cuda.is_available():
    device = torch.device("cuda")
    print("Using device: CUDA")
else:
    device = torch.device("cpu")
    print("Using device: CPU")

# Standard MNIST transforms
transform = transforms.Compose(
    [transforms.ToTensor(), transforms.Normalize((0.5,), (0.5,))])

# Data Loading
trainset = torchvision.datasets.MNIST(
    root='./data', train=True, download=True, transform=transform)
testset = torchvision.datasets.MNIST(
    root='./data', train=False, download=True, transform=transform)

trainloader = torch.utils.data.DataLoader(
    trainset, batch_size=64, shuffle=True)
testloader = torch.utils.data.DataLoader(testset, batch_size=64, shuffle=False)

class myCNN(nn.Module):
    def __init__(self):
        super(myCNN, self).__init__()
        # Input: 1 × 28 × 28
        self.conv1 = nn.Conv2d(in_channels=1, out_channels=6, kernel_size=5, padding=2)
        self.pool = nn.AvgPool2d(kernel_size=2, stride=2)
        self.conv2 = nn.Conv2d(in_channels=6, out_channels=16, kernel_size=5)
        
        self.fc1 = nn.Linear(16 * 5 * 5, 120)
        self.fc2 = nn.Linear(120, 84)
        self.fc3 = nn.Linear(84, 10)

    def forward(self, x):
        x = self.pool(F.relu(self.conv1(x)))
        x = self.pool(F.relu(self.conv2(x)))
        x = x.view(-1, 16 * 5 * 5)
        x = F.relu(self.fc1(x))
        x = F.relu(self.fc2(x))
        x = self.fc3(x)
        return x

# Initialize model and move to M2 GPU
model = myCNN().to(device)
criterion = nn.CrossEntropyLoss()
optimizer = optim.Adam(model.parameters(), lr=0.001)

train_losses = []
num_epochs = 5 

print("\nStarting Training...")
model.train()
for epoch in range(num_epochs):
    running_loss = 0.0
    for i, (images, labels) in enumerate(trainloader, 0):
        # Move data to MPS device
        images, labels = images.to(device), labels.to(device)

        optimizer.zero_grad()
        outputs = model(images)
        loss = criterion(outputs, labels)
        loss.backward()
        optimizer.step()

        running_loss += loss.item()
        
        if i % 200 == 199:
            print(f"[Epoch {epoch+1}, Batch {i+1}] Loss: {running_loss / 200:.4f}")
            running_loss = 0.0

    train_losses.append(running_loss / len(trainloader))

# Plotting results
plt.plot(train_losses, label="Training Loss")
plt.title('Training Loss Curve')
plt.xlabel('Epochs')
plt.ylabel('Loss')
plt.legend()
plt.show()

# Evaluation
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

print(f"\nFinal Test Accuracy: {100 * correct / total:.2f}%")

# --- WEIGHT EXPORT & QUANTIZATION ---

os.makedirs("exported_weights", exist_ok=True)
state_dict = model.state_dict()
torch.save(state_dict, "exported_weights/myCNN_weights.pth")

def quantize_int4(tensor):
    # Quantization logic remains CPU-bound via NumPy for precision/CSV handling
    arr = tensor.detach().cpu().numpy()
    scale = np.max(np.abs(arr)) / 7.0 if np.max(np.abs(arr)) > 0 else 1.0
    q = np.round(arr / scale)
    q = np.clip(q, -8, 7).astype(np.int8)
    return q, scale

csv_dir = "exported_weights_int4_csv"
os.makedirs(csv_dir, exist_ok=True)
scales = {}
int4_state = {}

for name, param in state_dict.items():
    q, scale = quantize_int4(param)
    int4_state[name] = q
    scales[name] = scale

    # Flatten for CSV output
    flat = q.reshape(-1)
    csv_path = f"{csv_dir}/{name}.csv"
    np.savetxt(csv_path, flat, fmt="%d", delimiter=",")
    print(f"Saved INT4 CSV: {csv_path} (scale={scale:.6f})")

np.save(f"{csv_dir}/scales.npy", scales)

# --- QUANTIZED INFERENCE TEST ---

def load_int4_weights_into_model(target_model, scales, int4_dict):
    new_state = {}
    for name, param in int4_dict.items():
        scale = scales[name]
        dequant = (param.astype(np.float32)) * scale
        new_state[name] = torch.tensor(dequant, dtype=torch.float32)
    target_model.load_state_dict(new_state)

print("\nRunning INT4 quantized inference on M2...")
int4_model = myCNN().to(device)
load_int4_weights_into_model(int4_model, scales, int4_state)
int4_model.eval()

correct_q = 0
total_q = 0
with torch.no_grad():
    for images, labels in testloader:
        images, labels = images.to(device), labels.to(device)
        outputs = int4_model(images)
        _, predicted = torch.max(outputs, 1)
        total_q += labels.size(0)
        correct_q += (predicted == labels).sum().item()

print(f"INT4 Quantized Test Accuracy: {100 * correct_q / total_q:.2f}%")