LXI H, 0002H ; load H with num1
LXI B , 0003H ; load B with num2
MVI A,0 ; Accumulator ==0
MOV D,M  ; storing D with num2
loop: CALL addd
DCX H
JNZ loop
MOV A,D
STA 0021H
HLT
addd: ADD D
MOV D,A
RET