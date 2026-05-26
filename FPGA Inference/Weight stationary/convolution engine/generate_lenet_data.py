#!/usr/bin/env python3
"""Generate hex inputs, weights, and expected outputs for stride-1 valid conv."""

import argparse
from pathlib import Path
import numpy as np

def twos_hex(value: int, bits: int) -> str:
    """Formats an integer into a two's complement hexadecimal string."""
    return f"{value & ((1 << bits) - 1):0{bits // 4}X}"

def parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(
        description="Generate image.hex, weights.hex, and expected_c*.hex for a convolution layer."
    )
    # Define simulation parameters
    parser.add_argument("--height", type=int, default=28, help="Input feature-map height.")
    parser.add_argument("--width", type=int, default=28, help="Input feature-map width.")
    parser.add_argument("--in-channels", type=int, default=1, help="Logical input channels.")
    parser.add_argument("--out-channels", type=int, default=16, help="Logical output channels.")
    parser.add_argument("--kernel-height", type=int, default=3, help="Kernel height.")
    parser.add_argument("--kernel-width", type=int, default=3, help="Kernel width.")
    parser.add_argument("--seed", type=int, default=None, help="Optional RNG seed.")
    
    # Define value ranges for data generation
    parser.add_argument("--input-low", type=int, default=-5, help="Lowest generated input value.")
    parser.add_argument("--input-high", type=int, default=5, help="Highest generated input value.")
    parser.add_argument("--weight-low", type=int, default=-5, help="Lowest generated weight value.")
    parser.add_argument("--weight-high", type=int, default=5, help="Highest generated weight value.")
    
    # Automatically output to the ./IO_files folder in the current directory
    parser.add_argument("--out-dir", type=Path, default=Path("IO_files"), help="Directory for generated hex files.")
    
    return parser.parse_args()

def main() -> None:
    args = parse_args()

    if args.kernel_height > args.height or args.kernel_width > args.width:
        raise ValueError("Kernel must fit inside the input feature map for padding=0, stride=1.")

    out_height = args.height - args.kernel_height + 1
    out_width = args.width - args.kernel_width + 1
    rng = np.random.default_rng(args.seed)

    # Generate random input data
    image = rng.integers(
        args.input_low,
        args.input_high + 1,
        size=(args.in_channels, args.height, args.width),
        dtype=np.int16,
    )
    
    # Generate random weights
    weights = rng.integers(
        args.weight_low,
        args.weight_high + 1,
        size=(args.out_channels, args.in_channels, args.kernel_height, args.kernel_width),
        dtype=np.int16,
    )
    
    # Calculate expected output
    expected = np.zeros((args.out_channels, out_height, out_width), dtype=np.int32)
    for oc in range(args.out_channels):
        for ic in range(args.in_channels):
            for oy in range(out_height):
                for ox in range(out_width):
                    patch = image[ic, oy : oy + args.kernel_height, ox : ox + args.kernel_width]
                    expected[oc, oy, ox] += int(np.sum(patch * weights[oc, ic]))

    # Create the directory if it doesn't exist
    args.out_dir.mkdir(parents=True, exist_ok=True)

    # Write image data to hex
    with (args.out_dir / "image.hex").open("w") as f:
        for ic in range(args.in_channels):
            for value in image[ic].reshape(-1):
                f.write(twos_hex(int(value), 8) + "\n")

    # Write weights to hex
    with (args.out_dir / "weights.hex").open("w") as f:
        for ky in range(args.kernel_height):
            for kx in range(args.kernel_width):
                for ic in range(args.in_channels):
                    packed = "".join(
                        twos_hex(int(weights[oc, ic, ky, kx]), 8)
                        for oc in reversed(range(args.out_channels))
                    )
                    f.write(packed + "\n")

    # Write expected output to hex
    for oc in range(args.out_channels):
        with (args.out_dir / f"expected_c{oc}.hex").open("w") as f:
            for value in expected[oc].reshape(-1):
                f.write(twos_hex(int(value), 16) + "\n")

    print(
        f"Successfully generated files in: {args.out_dir.resolve()}\n"
        f"Configuration: {args.in_channels}x{args.height}x{args.width} input, "
        f"{args.out_channels} output channels, "
        f"{args.kernel_height}x{args.kernel_width} kernel."
    )

if __name__ == "__main__":
    main()