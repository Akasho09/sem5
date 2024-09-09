; Write a program in assembly language of 8085 to generate Modulo-8 counter with a delay of 60 ms between each count 
; assuming a system with 0.5 microsecond clock period.

NEXT: MVI B , 0000H
MOV A,B
DISPLAY : OUT PORT1

loop: LXI H, COUNT
DCX H
MOV A,L
ORA H 
JNZ loop

INR B 
MOV A,B
CPI 8
JC DISPLAY 
JMP NEXT 