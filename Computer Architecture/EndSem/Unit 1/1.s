; for (int  i = 0; i < n; i++)  A[i]= A[i]=+1;
; - A->$S0 , N -> $S1 , i -> $t0

main :
   lw $s1 , n ; load s1(n) with n
   lw $s0 , A ; load s0(base A) with A
   li $t0 , 0 ; load t0(i) with 0

loop : 
   bge $t0 , $s1 , end_loop ; if (i>=n) jump and exit 
   sll $t1 , $t0 , 2  ; shift left logical by 2 , t1 -> i*4 
   add $t2 , $t1 , $s0 ; t2 -> points to current address of array
   addi $t0 , 1 ;  i++
   j loop

end_loop :
   jr $ra  


; for (int  i = 0; i < n; i++)  A[i]= A[i+1] ;

main :
   lw $s1 , n ; load n
   lw $s0 , A ; base A 
   li $t0 , 0  ; i=0

loop : 
   bge $t0 , $s1 , end_loop 
   sll $t1 , $t0 , 2 ; i*4
   add $t2 , $t1 , $t0 ; t2->A[i]
   addi $t0 , $t0 ,1 ; i++
   addi $t1 , $t1 , 4 ; A[i+1]
   lw $t3 , 0($t1) 
   sw $t2 , 0($t1) 
   j loop
end_loop : 
jr $ra 

