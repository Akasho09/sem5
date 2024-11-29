LXI H, 0015H      ; Load the address 0015H into the HL register pair.
MOV A, M          ; Move the data at memory location 0015H (pointed to by HL) into the accumulator (A).
INX H             ; Increment HL to point to the next memory location (0016H).
ADD M             ; Add the data at memory location 0016H (pointed to by HL) to the value in the accumulator (A).
STA 0017H         ; Store the result of the addition (A) at memory location 0017H.
HLT               ; Halt the program.

------


LDA 0015H        ; Load the value from memory location 0015H into the accumulator (A).
MOV B, A         ; Copy the value from the accumulator (A) into register B.
LDA 0016H        ; Load the value from memory location 0016H into the accumulator (A).
ADD B            ; Add the value of register B to the value in the accumulator (A).
STA 0017H        ; Store the result from the accumulator (A) into memory location 0017H.
HLT              ; Halt the program.

-----
; 16 Bit add numbers 
; LHLD loads Lower bit to L and Higher to Higher 
; Lower bits is input first 
; ie 15 is LB and 16 higher 
LHLD 0x0015       ; Load 16-bit data from 0x0015 (low byte) and 0x0016 (high byte) into HL.
MVI C, 00H        ; Initialize carry register to 0.
XCHG              ; Exchange HL (first number) with DE.
LHLD 0x0017       ; Load 16-bit data from 0x0017 (low byte) and 0x0018 (high byte) into HL.
DAD D             ; Add the 16-bit number in DE to HL. Result is in HL.
JNC final         ; Jump to 'final' if no carry is generated during the addition.
INR C             ; Increment carry register C if a carry is generated.
final: SHLD 0x001A ; Store the 16-bit result from HL into memory at 0x001A (low byte) and 0x001B (high byte).
MOV A, C          ; Move the carry value to the accumulator (A).
STA 0x001D        ; Store the carry value from A into memory at 0x001D.
HLT               ; Halt the program.


-----
; Add series of numbers 
LXI H, 0015H      ; Load HL with the starting memory address 0015H.
MOV C, M          ; Load the count of numbers (from 0015H) into register C.
MVI A, 00H        ; Initialize the accumulator (A) to 0, to store the sum.
loop: INX H       ; Increment HL to point to the next memory location.
      ADD M       ; Add the contents of the memory location (pointed by HL) to the accumulator.
      DCR C       ; Decrement the counter in register C.
      JNZ loop    ; If C is not zero, jump back to 'loop' to process the next number.
STA 0030H         ; Store the final sum from the accumulator (A) into memory at 0030H.
HLT               ; Halt the program.

------
;Addition of series of numbers hexadecimal skip negatives 
MVI C,7  ; count = no of numbers to add
MVI A,00  ; accumulator=0
LXI D,00  ; 16 bit ANS=0
LXI H, 0001H ; load HL with address 0001
J1: MOV A,M ; loop load 0001 into accumulator
CPI 0  ; compare accumlator to zero => if -ve => carry=1
JC J2  ;  jump if zero ie negative number
ADD D ; Add D to Accumulator
MOV D,A  ; move accumator data to DE register ie ans
J2: INX H ; increment HL
DCR C ; decrement Count
JNZ J1 ; Jump if not zero C to j1
MOV A,D ; move ans to accumulator
STA 0020H ; store accumulator =sum 
HLT

