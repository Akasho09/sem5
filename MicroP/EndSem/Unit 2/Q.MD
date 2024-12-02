## LOOP Instruction in 8086
Mnemonic: LOOP <label>
Decrements the value of the CX register by 1.
If the resulting value in CX is not zero, control jumps to the specified label (address).
If CX = 0, the execution continues with the next instruction.
`eg` : 
MOV CX, 5       ; Initialize loop counter to 5
START: 
    MOV AL, 'A' ; Example operation (Move 'A' into AL)
    LOOP START  ; Decrement CX and jump to START if CX ≠ 0


## Details of MOVSB
Mnemonic: MOVSB
Operation:
Copies the byte of data from the memory location pointed to by the SI register to the memory location pointed to by the DI register.
Updates the SI and DI registers automatically based on the DF (Direction Flag).
- If DF = 0 (Clear): SI and DI are incremented after the operation (processing strings from low to high memory).
- If DF = 1 (Set): SI and DI are decremented after the operation (processing strings from high to low memory).
eg:
CLD                ; Clear DF (process strings forward)
MOV SI, 2000H      ; Source memory starts at 2000H
MOV DI, 3000H      ; Destination memory starts at 3000H
MOVSB              ; Copy byte from [2000H] to [3000H]
