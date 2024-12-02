1. Discuss how assembly language is used with C programming with suitable example. Also
discuss how are software interrupt used in programming with suitable example.
###
- How Software Interrupts are Used in Programming
> A software interrupt is a mechanism to signal the processor that a specific service or function is required. It transfers control to an interrupt service routine (ISR) and is often used for system calls or debugging.
-  In x86 assembly, the INT instruction is used to invoke software interrupts. For example, interrupt INT 21H in DOS provides various services like reading from the keyboard or writing to the screen.

- Software Interrupt is invoked by the use of INT instruction. The INT instruction in assembly language is used to trigger a software interrupt. 
- It stands for “interrupt” and is followed by a number that specifies which interrupt to trigger. 
This event immediately stops the execution of the program and passes execution over to the INT handler. The INT handler is usually a part of the operating system and determines the action to be taken. It occurs when an application program terminates or requests certain services from the operating system. 

For example, output to the screen, execute file, etc


2. 
