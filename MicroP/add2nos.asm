; https://www.sim8085.com/

;adding 2 decimal numbers

;<Program title>

jmp start

;data

;code
start: nop
MVI A ,02H  ; move data 02 to Accumulator
MVI B ,03H  ; move 03 to reg B
ADD B  ; add B to accumulator
STA 0001H ; store accumulator data at 0001 address

hlt



jmp start


;code
start: nop
LXI H, 0001H ; LOAD CONTENTS AT 0001 ADDRESS TO HL REGISTER  ????????Y NOT WITH B
MOV A,M  ; MOVE CONTENTS AT 0001 ADDRESS OR H (MEMORY) TO A
INX H ; INCREMENT ADDRESS TO 0002
ADD M  ; ADD 0002 (MEMORY) TO ACCUMULATOR
STA 0003H  ;store accumulator data at 0003 address

hlt
