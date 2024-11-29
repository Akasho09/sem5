; 8086
MOV BL , 00H ;+ve 
MOV CL , 00H ; -ve 
MOV DL , 05H ; count
LEA SI , [2000H]
loop: MOV AL, [SI] ; AL=current el
SHL AL,01 ; shift left current element
JNC J1 
INR CL
JMP J2
J1: INR BL
J2: DCR DL
JNZ loop
MOV [200A] , BL
MOV [200B] , CL
HLT