1. Draw and explain functional block diagram of 8085 microprocessor.

![alt text](image.png)


2. `The 8086 microprocessor is a significant improvement over the 8085 microprocessor, with advancements in architecture, performance, and features. Below is a detailed comparison highlighting the key differences:`

1. Word Size
8085: 8-bit microprocessor, meaning it processes 8 bits of data at a time.
8086: 16-bit microprocessor, capable of processing 16 bits of data simultaneously, which makes it faster and more efficient.
2. Address Bus
8085: 16-bit address bus, allowing it to address 
2^16=64KB of memory.
8086: 20-bit address bus, enabling it to address 
2^20=1MB of memory.
3. Data Bus
8085: 8-bit data bus, transferring 8 bits of data at a time.
8086: 16-bit data bus, capable of transferring 16 bits of data at a time.
4. Clock Speed
8085: Operates at a clock speed of up to 3 MHz.
8086: Operates at clock speeds ranging from 5 MHz to 10 MHz.
5. Instruction Set
8085: Simpler instruction set with fewer instructions designed for basic control and arithmetic tasks.
8086: Enhanced instruction set with support for more powerful operations, including string manipulation, bit manipulation, and multiplication/division.
6. Architecture
8085: Follows an 8-bit accumulator-based architecture, which means most operations are performed using the accumulator.
8086: Follows a 16-bit register-based architecture, with separate general-purpose and special-purpose registers for greater versatility.
7. Memory Segmentation
8085: Does not support memory segmentation. Memory is addressed linearly.
8086: Supports memory segmentation, dividing the memory into four segments (Code, Data, Stack, and Extra) to facilitate efficient program execution and larger memory handling.
8. Instruction Queue
8085: Does not use instruction queuing. Instructions are fetched, decoded, and executed sequentially.
8086: Implements a 6-byte prefetch queue, which allows it to fetch instructions while others are being executed, enhancing overall performance (pipelining).
9. Multiprocessing Support
8085: Does not support multiprocessing.
8086: Supports basic multiprocessing with features like a HOLD pin to allow external devices to take control of the bus.
10. Interrupts
8085: Five hardware interrupts (TRAP, RST7.5, RST6.5, RST5.5, INTR) and one software interrupt (RST).
8086: Offers more sophisticated interrupt handling with 256 software interrupts and support for vectored and priority-based hardware interrupts.
11. IO/Memory Addressing
8085: Uses separate memory and I/O address spaces (IO/M signal).
8086: Supports a unified memory and I/O addressing scheme for more flexible hardware interfacing.
12. Applications
8085: Used in smaller, less complex systems, such as basic controllers and embedded applications.
8086: Designed for more complex and high-performance systems, such as personal computers and industrial control systems.