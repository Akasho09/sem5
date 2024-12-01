---
; Simple Multiplication using addition of 2 8-bit nums into 16 bit sum
LXI H, 1000H
MOV C,M
INX H
MOV B,M
MVI D,0000H ; LSB
MVI E ,0000H ; MSB
loop: MOV A,D
ADD C
JNC skip
INR E
skip: MOV D,A
DCR B  
JNZ loop
MOV A,D
STA 1003H 
MOV A,E
STA 1002H
HLT
---

; MULTIPLICATION USING SHIFTING MULTIPLICAND 

LHLD 1000H
MOV E,L
MVI D,00H 
MOV A,H ; plier
MVI C,08H
LXI H ,0000H 
loop: RAR 
JNC skip 
DAD D 
skip: XCHG 
DAD H 
XCHG 
DCR C
JNZ loop 
SHLD 1002H 
HLT 

----
; without shifting multiplicand 
  LHLD 1000H
  MVI D,00H
  MOV E,L
  MOV A,H ; Multiplier 
  LXI H ,0000H
  MVI C ,08H
  loop: DAD H
  RAL
  JNC skip
  DAD D 
  skip: DCR C
  JNZ loop
  SHLD 1002H
  HLT
  

; Initialize program
LXI H, 2000H       ; Load address of multiplicand into HL register pair
MOV B, M           ; Move multiplicand (2000H) to register B
INX H              ; Point to next memory location (2001H)
MOV C, M           ; Move multiplier (2001H) to register C

; Initialize result registers
MVI D, 00H         ; Initialize higher byte of the result to 0
MVI E, 00H         ; Initialize lower byte of the result to 0

; Start multiplication loop
LOOP: MOV A, C     ; Copy multiplier to accumulator
       CPI 00H     ; Check if multiplier is zero
       JZ END      ; If zero, multiplication is complete

       ADD E       ; Add lower byte of result with multiplicand
       MOV E, A    ; Store the updated lower byte back in E
       MOV A, D    ; Load higher byte of the result into accumulator
       ADC B       ; Add multiplicand to higher byte with carry
       MOV D, A    ; Store the updated higher byte back in D

       DCR C       ; Decrement multiplier
       JMP LOOP    ; Repeat until multiplier becomes zero

; Store result
END:  LXI H, 2002H ; Load address to store the result
       MOV M, E    ; Store lower byte of result at 2002H
       INX H       ; Increment address to point to 2003H
       MOV M, D    ; Store higher byte of result at 2003H

HLT                 ; Halt the program

