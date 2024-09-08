; if (i==j) f= g+h else f=g-h ;
beq $s1 , $s2 
add $t0 , $s3, $s4
bne $s1 , $s2
sub $t0 , $s3, $s4

;or

bne $s1, $s2 , else
add $t0 , $s3, $s4
exit:
else:
sub $t0, $s2, $s4
exit:


;  x=x+A[i] i=i+1  ,where i is in  $s2 ,, A in $s1 , x in $s0

sll $t0, $s2 ,2
add $t0 , $t0 , $s1
add $s0 , $s0 , $t0
ADDI $s2 , $s2 , 1



;for (int  i = 0; i < n; i++) 
;     A[i]= A[i+1]


main:
    lw   $s1, n                # Load n into $s1(to register) ; loads word
    la   $s0, A                # Load base address of A into $s0  ;loads address
    li   $t0, 0                # Initialize i to 0

loop:
    bge  $t0, $s1, end_loop    # If i >= n, exit loop
    sll  $t1, $t0, 2           # $t1 = i * 4 (to index array A, each element is 4 bytes)
    add  $t2, $s0, $t1         # $t2 = Address of A[i]
    addi $t0, $t0, 1           # i = i + 1
    sll $t1 ,$t0 ,2            ; (i+1 )*4
    add $t1 , $s0 ,$t1         ;t1 is address of A[i+1] , 4(i+1)+A
    sw   $t5, 0($t2)           # Store A[i+1](register) into A[i] (memory)
    j    loop                  # Jump back to the start of the loop

end_loop:
    exit