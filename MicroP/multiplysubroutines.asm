LXI H, 0002H
MOV D,M
LXI B , 0003H
loop: INX H
CALL addd
DCX B
JNZ loop
MOV A,D
STA 0012H
HLT
addd: MOV A,D
ADD M
MOV D,A
RET