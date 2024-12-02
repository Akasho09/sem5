MVI B,06H
MVI H,00H
MOV L,B
MOV C,B
start: DCR B 
MOV E,L ; 
loop:  MOV A,L
       ADD E
       MOV L,A
       DCR B
       JNZ loop
DCR C
MOV B,C 
JNZ start
SHLD 2300H
HLT