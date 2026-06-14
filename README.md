# LeNet Model on FPGA (Intel Cyclone V)

This repository contains an implementation of the full **LeNet deep learning algorithm** on an Intel Cyclone V FPGA. To optimize performance and explore hardware-level dataflows, the architecture utilizes a modular processing framework split across four distinct **Systolic Array** hardware configurations (Weight, Input, Output, and Row stationary).

---

## Required Software
Ensure you have the following software installed on your machine to synthesize, compile, and simulate this project:
* **Intel Quartus Prime Standard Edition (Version 20.1)**
    * Must include **ModelSim** integration.
    * Must include **Cyclone V** device support package.
* **Archive Utility:** Any zip extraction software of your choice to unpack the workspace.

---

## Project Structure & Directory Guide
The project is split into four distinct Quartus Prime workspaces, each contained in its own folder. Each directory implements the complete LeNet neural network pipeline using a specialized hardware dataflow structure:

| Directory Name | Description / Stationary Configuration |
| :--- | :--- |
| `Full_Project` | **Weight Stationary** Version |
| `Full_Project_IP` | **Input Stationary** Version |
| `Output_Stationary_Full_project` | **Output Stationary** Version |
| `Row Stationary Full project` | **Row Stationary** Version |

### Key Source Files & Hardware Modules
Inside each project directory, the underlying SystemVerilog (`.sv`) source files construct the layered neural network engine:
* **Top-Level Framework:** `Model_top.sv` — Defines and routes the full LeNet convolutional structure as a cohesive hardware design.
* **Convolution Layers:** `Systolic_top.sv`, `PE.sv`, and `PE_array.sv` — Define the core matrix of systolic Processing Elements (PEs).
* **Pooling Layers:** `Pooling_top.sv` and `pooling_layer.sv` — Implement downstream pooling modules.
* **Fully Connected Layers:** `Fc_top.sv`, `fc_layer.sv`, and `fc_serial.sv` — Handle execution layers for the fully connected network blocks.
* **Memory Blocks:** Various supporting design files that configure embedded ROMs and RAMs across the pipeline.

---

## Getting Started & Execution

### 1. Extracting and Opening the Project
1. Extract the downloaded project archive using your preferred extraction tool.
2. Open the directory corresponding to the specific systolic dataflow you wish to test.
3. Open the project file using one of these two methods:
    * Double-click the project configuration file ending with the **`.qpf`** extension.
    * Launch Quartus Prime, navigate to **File > Open Project**, and browse to the extracted folder to find the project.

### 2. Mandatory Testbench Modification
Because memory data path layouts use localized absolute paths, you must point the testbench to your machine's directories prior to running simulations:
1. Locate and edit the testbench source file named **`tb_lenet_top`**.
2. Navigate to **lines 161–162** and update the absolute file paths to your current directory layout.
    * *Tip:* You can find these lines quickly by hitting `Ctrl + F` and searching for any text beginning with `"C:/"`.

---

## Critical Compilation Assignments
Several advanced synthesis rules have been modified to successfully compile this intensive design. While these adjustments are pre-configured within the provided `.qpf` file, they are documented here for verification:

Navigate to: **Assignments > Settings > Compiler Setting > Advanced Settings (Synthesis)**

1. **Allow Register Merging:** Set to **`OFF`**
   * *Purpose:* Prevents the Analysis & Synthesis engine from getting permanently stuck/stalled at 47% completion.
2. **Iteration Limit for constant Verilog loops:** Increased to **`100,000`**
   * *Purpose:* Crucial for unrolling the massive 48,000-line Weight ROM memory initialization block designated for Fully Connected Layer 1 without failing with a compilation error.

To start full hardware compilation, use the key shortcut **`Ctrl + L`**.

> **Note on VCD Files:** Compiling will generate a fresh Value Change Dump (`.vcd`) file locally. Pre-existing `.vcd` files were stripped out from distribution due to their massive file size which blocks distribution over web/Canvas platforms.

---

## Simulation & Analysis Workflows

Once compilation finishes without error, you can explore key hardware performance, layouts, and logic metrics using built-in Quartus tools:

### Functional Waveform Simulation
* Run the testbench simulation via **Tools > Run Simulation Tool > RTL Simulation** to spin up ModelSim and look at real-time simulated values.

### Hardware Profiling Tools
* **RTL Viewer:** Navigate to **Tools > Netlist Viewers > RTL Viewer** to examine schematic representations of the generated gates and blocks.
* **Chip Planner:** Navigate to **Tools > Chip Planner** to map and inspect logic element packing on your Cyclone V FPGA fabric layout.
* **Power Analyzer:** Navigate to **Processing > Power Analyzer Tool** to monitor thermal and power dynamics.
  * *Important:* Before executing the power analysis, you must explicitly bind the generated simulation data by choosing **Add Power Input File(s)** and selecting the dynamic `.vcd` file found in the `modelsim/` folder of that project block.
