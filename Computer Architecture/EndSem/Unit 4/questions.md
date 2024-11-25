## What is the technique with the help of which a vector processor is able to execute a single vector faster than one element per clock cycle?

##
`Convoy`: A convoy is a set of vector instructions that can begin execution in the same clock cycle, assuming no data dependencies or structural hazards exist between them. These instructions operate independently and can be processed together in a single execution phase of the vector processor​
LV V1, R1 ; Load vector elements from memory to register V1
LV V2, R2 ; Load vector elements from memory to register V2
ADDV V3, V1, V2 ; Perform vector addition
SV R3, V3 ; Store result vector into memory

Convoy 1: Contains the two load instructions (LV V1, R1 and LV V2, R2), which can execute in parallel if the memory subsystem supports it.
Convoy 2: Contains the ADDV instruction, which depends on the results of the loads.
Convoy 3: Contains the SV instruction, which stores the results of the addition back to memory

`Chaining`: Chaining is a technique that allows the output of one vector operation to directly feed into another vector operation without waiting for the entire result to be computed. For example, the results of a vector multiplication can immediately be used by a subsequent vector addition operation, improving overall performance by overlapping operations​

`Chime`: A chime represents the approximate time taken to execute a convoy of vector instructions. It serves as a timing measure for the execution of a sequence of vector operations. The total execution time for a vector sequence is calculated as the product of the number of convoys (measured in chimes) and the vector length, accounting for the time to execute each convoy.​


## Strip Mining 
Strip Mining in vector architectures is a technique used to handle loops with iteration counts larger than the maximum vector length supported by a vector processor. It involves breaking down the iteration space of a loop into smaller chunks, or "strips," that match the vector length of the processor. Each strip is processed sequentially, while the iterations within a strip are executed in parallel, taking advantage of vectorization.

Significance in Vector Architectures:
- Efficient Vectorization: Strip mining allows large data sets to be processed using vector operations, even when the vector length exceeds the hardware's capacity. This enables the processor to handle data that doesn't fit into a single vector register.

- Regular Memory Access: It ensures efficient memory access patterns by aligning the data processed in each strip with the vector length, minimizing memory bank conflicts and improving throughput.

- Compiler Optimization: Many compilers automatically apply strip mining to loops during vectorization, ensuring that the code can take full advantage of vector hardware capabilities.

- Scalability: By adapting to the constraints of the vector length, strip mining makes algorithms scalable across different hardware with varying vector sizes. 

## Basic Structure of the Vector Processor Architecture
The basic structure of a vector processor consists of the following components:
- Vector Registers:
Large registers holding multiple elements of a vector for parallel computation.
- Vector Functional Units (VFUs):
Specialized units for arithmetic and logical vector operations like addition, multiplication, etc.
Pipelined to allow multiple operations in progress.
- Vector Length Register (VLR):
Defines the length of the active portion of the vectors being processed.
- Vector Mask Register (VMR):
Enables masking for conditional operations, ensuring only selected vector elements are processed.
- Control Unit:
Manages instruction flow and ensures parallel execution is optimized for vector operations.
- Memory Unit with Gather/Scatter Support:
Handles contiguous and non-contiguous memory access efficiently.
Functionality:
These components work together to enable SIMD operations by applying a single instruction to multiple data elements simultaneously.

##  Problem Resolved by Vector Mask Control

Issue:
Without vector mask control, operations on vectors with conditional computations (e.g., processing only specific elements based on a condition) cannot be vectorized. The processor would need to fall back on scalar operations, reducing efficiency.
eg :
for (int i = 0; i < n; i++) {
    if (a[i] > 0) {
        b[i] = a[i] * c[i];
    }
}
Equivalent MIPS code : 
LV V1, Ra      ; Load vector a
LV V2, Rc      ; Load vector c
`SGT V3, V1, #0 ; Set mask where a[i] > 0`
MULV.M V4, V1, V2 ; Multiply only masked elements
SV V4, Rb      ; Store result in b
- HOW ?
Uisng `Vector Mask Register (VMR)`:
A special-purpose register stores a bitmask where each bit corresponds to an element in a vector register.
Bit Value Meaning:
1: The corresponding element is active (participates in the operation).
0: The corresponding element is masked (ignored).

## vld v0,x5 # Load vector X
  vmul v1,v0,f0 # Vector-scalar multiply
  vld v2,x6 # Load vector 
  vadd v3,v1,v2 # Vector-vector add
  vst v3,x6 # Store the sum

Answer: 
The first convoy starts with the first vld instruction. The vmul is dependent on the
first vld, but chaining allows it to be in the same convoy.
The second vld instruction must be in a separate convoy because there is a
structural hazard on the load/store unit for the prior vld instruction. The vadd
is dependent on the second vld, but it can again be in the same convoy via chain-
ing. Finally, the vst has a structural hazard on the vld in the second convoy, so it
must go in the third convoy. This analysis leads to the following layout of vector
instructions into convoys:
1. vld vmul
2. vld vadd
3. vst
The sequence requires three convoys. Because the sequence takes three chimes and
there are two floating-point operations per result, the number of cycles per FLOP is
1.5 (ignoring any vector instruction issue overhead). Note that, although we allow
the vld and vmul both to execute in the first convoy, most vector machines will
take 2 clock cycles to initiate the instructions.