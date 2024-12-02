#include <stdio.h>

// Declaration of the assembly function
extern int add_two_numbers(int, int);

int main() {
    int result = add_two_numbers(10, 20);
    printf("Result: %d\n", result);
    return 0;
}




// #include<stdio.h>  

// int foo(void) {
//   int joe=1234, fred;
//   __asm__( 
// " mov %1,%%eax\n"
// "  add $2,%%eax\n"
// "  mov %%eax,%0\n"
// :"=r" (fred) /* %0: Output variable list */
// :"r" (joe) /* %1: Input variable list */
// :"%eax" /* Overwritten registers ("Clobber list") */
//   );
//   return fred;
// }

// int main() {  
//    int a = 10, b = 20, c;  
//    foo() ;
// }  