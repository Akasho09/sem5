# Give examples of different types of data hazards with the help of MIPS assembly language instructions.
---
Data hazards occur in pipelined processors when the execution of instructions depends on the results of other instructions, leading to conflicts :
1. `Read After Write (RAW)` - "True Dependency"
A RAW hazard occurs when an instruction depends on the result of a previous instruction that has not yet completed.
eg:
ADD R1, R2, R3   # Instruction 1: R1 = R2 + R3
SUB R4, R1, R5   # Instruction 2: R4 = R1 - R5 (depends on R1)
solutions :
- Stalling: Delay the dependent instruction until the result is available.
- Forwarding/Bypassing: Use intermediate results directly from the pipeline without waiting for write-back.
2. `Write After Read (WAR)` - "Anti-Dependency"
A WAR hazard occurs when a later instruction writes to a register before an earlier instruction reads it.
eg: 
SUB R4, R1, R5   # Instruction 1: R4 = R1 - R5 (reads R1)
ADD R1, R2, R3   # Instruction 2: R1 = R2 + R3 (overwrites R1)
- SUB is trying to read R1, but ADD might overwrite R1 before SUB reads it.
- easy to handle , ensure read before write .

3. `Write After Write (WAW)` - "Output Dependency"
A WAW hazard occurs when two instructions write to the same register, and the order of writes affects the correctness of the result.
##### WAW Hazard
ADD R1, R2, R3   # Instruction 1: R1 = R2 + R3
MUL R1, R4, R5   # Instruction 2: R1 = R4 * R5
- handled by delaying writes until correct order is preserved .


# What is the function of hazard detection unit? Write and elaborate the technique used to detect Read-after-Write hazard.
---
The Hazard Detection Unit (HDU) is a crucial component of a pipelined processor designed to identify and resolve data hazards dynamically. Its primary functions include:

- Vertical units before ALU muxes , DM , after DM. Connect 2 to Forwarding unit (Other 2 are from Reg file and 3 ops to Muxes ) , 2 to Muxes before ALU . 



Function of the Hazard Detection Unit: 
The Hazard Detection Unit (HDU) is a crucial component of a pipelined processor designed to identify and resolve data hazards dynamically. Its primary functions include:
- Detecting Hazards:
Identifies situations where pipeline stages conflict due to dependencies between instructions.
- Stalling:
Prevents the pipeline from continuing execution until the hazard is resolved (e.g., by delaying the dependent instruction).
- Maintaining Instruction Order:
Ensures that the pipeline does not produce incorrect results due to hazards.
- Optimizing Throughput:
Works alongside other mechanisms like forwarding/bypassing to minimize pipeline stalls and maximize performance.

## Steps to Detect a RAW Hazard
- Compare Destination Register of the Previous Instruction:
Check if the destination register of the previous instruction in the pipeline is the same as the source register(s) of the current instruction.
- Check Pipeline Stages:
Identify if the required data is still in a previous stage of the pipeline (e.g., Execute (EX) or Memory Access (MEM)) and not yet written back.
- Insert Stall if Necessary:
If a RAW dependency is detected and no data forwarding is possible, the HDU inserts a pipeline stall by delaying the execution of the dependent instruction.
### Example of RAW Hazard Detection
1. ADD R1, R2, R3   # Instruction 1: Writes to R1
2. SUB R4, R1, R5   # Instruction 2: Reads R1
The HDU checks the destination register of the ADD instruction (R1).
It compares R1 with the source registers of the SUB instruction (R1 and R5).
If the destination register of ADD matches one of the source registers of SUB and the value of R1 is not yet available, the HDU detects a RAW hazard.
Pipeline Behavior

Concept:
The result from the EX or MEM stage is directly forwarded to the ID/EX stage, bypassing the need to wait for the write-back stage.

#
