### 
Consider enhancing an arithmetic machine into machine A, and machine B. Machine A's add-subtract unit is 10 times faster, multiply unit is 20 times faster, divider is 5 times faster. Machine B is overall 10 times faster for all arithmetic computations. Calculate the speed-up for both machines using Amdahl’s law and state which machine is faster. The general proportion of instruction execution on the arithmetic machine is add-subtract 60%, multiply 20%, divide 10%, and 10% overheads which cannot be enhanced.
---
E1, E2 , E3 for A and B and calculate .


### 
MIPS architecture is supported by byte addressable memory of 32-bit
address size. What is the necessary condition for address validity in
MIPS architecture. Is 12A a valid address, give reason why? If not,
the two valid address closest to it?
---
Byte addressable memory means that each address in the memory corresponds to a single byte of data. 
=> 32-bit `Byte Addressable` => 4 8-bit address memory spaces for each variable.
- or efficient memory access, addresses must be word-aligned. This means the memory address of any word must be a multiple of 4.
=> Addresses will be 0,4,8 ... divisible of 4s only .
- Addresses must lie within the range 
- Alignment (Based on Data Size):

12A or 298 isnt but 296 and 300 are .


### 
int funct(int a, int b) {
    if (a<b) return 0;
    else return I1;
}
---
MIPS equivalent code : 
  $a0 - First input (a)
  $a1 - Second input (b)
Output: 
  $v0 - Returns 0 if a < b, otherwise returns 1

{
    funct:
    <!-- slt $v0, $a0, $a1  # $v0 = 1 if a < b, else $v0 = 0 -->
    <!-- beq $v0, $zero, return_one  # If a >= b, jump to return_one -->
    bge $a0 , $a1 return_one  # If a >= b, jump to return_one 
    j return_zero               # Otherwise, jump to return_zero

return_zero:
    li $v0, 0  # Load 0 into $v0
    jr $ra     # Return to caller

return_one:
    li $v0, 1  # Load 1 into $v0
    jr $ra     # Return to caller

}
- jal 1000 ==> jumps to address and also stores current address in $ra 


###
for (int  i = 0; i < n; i++)  A[i]= A[i]=+1;
- A->$S0 , N -> $S1 , i -> $t0

main :
   lw $s1 , n ; load s1(n) with n
   lw $s0 , A ; load s0(base A) with A
   li $t0 , 0 ; load t0(i) with 0

loop:
    bge $t0, $s1, end_loop ; If i >= n, exit loop.
    sll $t1, $t0, 2     ; Multiply i by 4 to calculate the offset.
    add $t2, $t1, $s0   ; Calculate address of A[i].
    lw $t3, 0($t2)      ; Load A[i] into $t3.
    addi $t3, $t3, 1    ; Increment A[i] by 1.
    sw $t3, 0($t2)      ; Store updated A[i] back to memory.
    addi $t0, $t0, 1    ; Increment i.
    j loop              ; Jump back to loop.

end_loop :
   jr $ra  


###  write MIPS program for    C = A+B ,  D = A- E ,  F = C+ D

main:
    lw   $t0, A        # Load A into $t0
    lw   $t1, B        # Load B into $t1
    lw   $t2, E        # Load E into $t2

    # Compute C = A + B
    add  $t3, $t0, $t1 # $t3 = A + B
    sw   $t3, C        # Store the result in C

    # Compute D = A - E
    sub  $t4, $t0, $t2 # $t4 = A - E
    sw   $t4, D        # Store the result in D

    # Compute F = C + D
    lw   $t5, C        # Load C into $t5
    lw   $t6, D        # Load D into $t6
    add  $t7, $t5, $t6 # $t7 = C + D
    sw   $t7, F        # Store the result in F


- Program Size (bits)=Total Instructions×32
  Program Size (bits)=11×32=352bits.

- 
