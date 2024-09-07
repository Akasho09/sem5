;8 bit hexadecimal sum with carry 
MVI C,00  ; initilize carry =0
LXI H, 0000H  ; load H(only H not B) with 0000 address
MOV A,M  ; move h to accumulator
INX H  ; inc H to 0001
ADD M ; add data at 0001 to accumulator
JNC loop1 ; jump if NO carry to loop 1  
INR C ; increment carry           
loop1: STA 0003H ; store add at 0003 
MOV A,C ; move carry to accumlator  
STA 0002H  ; store carry
hlt