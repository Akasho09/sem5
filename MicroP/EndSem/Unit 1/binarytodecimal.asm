LXI H, 2303H     ; Load HL register pair with the memory address 2303H (the address of the first operand)
MVI B, 00H       ; Initialize B register (ANS) to 00H, used to store the result
MVI C, 01H       ; Load the C register with 01H, which is used as the multiplier
MVI D, 04H       ; Load D register with 03H, which is used as the loop counter (the second operand, 3)

loop: 
MVI E, 02H       ; 2 bits
MOV A, M         ; Load the accumulator with the value at the memory location pointed to by HL
CPI 0FH          ; Compare the value in the accumulator with 0FH (15 in decimal)
JNC skip         ; If the value in A >= 0FH (No borrow), jump to skip
SUI 0EH          ; Subtract 0EH (14 in decimal) from A if the comparison was less than 0FH

skip:
RAR              ; Rotate Accumulator Right (accumulator content moves to carry and A)
JNC skip2        ; If no carry, skip the next instruction
MOV L, A         ; Move the content of A into L
MOV A, B         ; Move content of B (ANS) into A
ADD C            ; Add C (the multiplier) to A
MOV B, A         ; Move the result back to B (storing the sum in B)
MOV A, C         ; Move C back into A
ADD C            ; Add C again to A
MOV C, A         ; Store the result of adding C back into C
MOV A, L         ; Restore the original value of A from L

skip2:
DCR E            ; Decrement E (counts down)
JNZ skip         ; If E != 0, jump back to 'skip' and repeat the operation
DCX H            ; Increment HL to point to the next memory location
DCR D            ; Decrement D (the counter for the second operand)
JNZ loop         ; If D != 0, jump back to 'loop' and repeat

MOV A, B         ; Move the final result into A from B
STA 2305H        ; Store the result in memory location 2305H
HLT              ; Halt the program
