import numpy as np
from scipy.signal import convolve2d

# Parameters matching our SystemVerilog Testbench
H, W = 480, 640
K = 64
OUT_CHANNELS = 2 # Matches ARRAY_COLS = 2

# Generate random 8-bit signed integers (kept small to prevent 16-bit overflow)
# Range [-5, 5] ensures the MAC accumulations easily fit in 16-bit signed registers
image = np.random.randint(-5, 6, size=(H, W))
weights = np.random.randint(-5, 6, size=(OUT_CHANNELS, K, K))

# Helper to convert signed integers to Hex strings
def to_hex(val, bits):
    return hex((val + (1 << bits)) % (1 << bits))[2:].zfill(bits // 4).upper()

# 1. Write Image Hex (Flattened row-major)
with open("image.hex", "w") as f:
    for val in image.flatten():
        f.write(f"{to_hex(val, 8)}\n")

# 2. Write Weights Hex
# The array loads weights k-element by k-element. 
# Each line contains the weights for all Output Channels for a specific K.
with open("weights.hex", "w") as f:
    # Flatten KxK to 9 elements
    w_flat = weights.reshape(OUT_CHANNELS, -1)
    for k in range(K * K):
        # Format: Filter1_Hex Filter0_Hex (Space separated for easy SV parsing)
        line = f"{to_hex(w_flat[1, k], 8)}{to_hex(w_flat[0, k], 8)}\n"
        f.write(line)

# 3. Calculate Golden Output & Write Hex
# scipy's convolve2d requires flipping the kernel to do cross-correlation (which CNNs actually use)
# mode='valid' means no padding, resulting in a 3x3 output
print("=== PYTHON GOLDEN CONVOLUTION ===")
for c in range(OUT_CHANNELS):
    # Flip weights for mathematical cross-correlation (standard CNN behavior)
    kernel = np.flipud(np.fliplr(weights[c]))
    output = convolve2d(image, kernel, mode='valid')
    
    print(f"--- Filter {c} Output ---")
    print(output)
    
    with open(f"expected_c{c}.hex", "w") as f:
        for val in output.flatten():
            f.write(f"{to_hex(val, 16)}\n")

print("\nSuccess! Generated image.hex, weights.hex, expected_c0.hex, expected_c1.hex")