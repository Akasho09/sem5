
## Function and Operator Overloading
- `Function overloading` allows you to define multiple functions with the same name but with different parameters (either in number, type, or both). The compiler decides which version of the function to call based on the arguments passed.

- `Operator overloading` allows you to define or redefine the behavior of operators for user-defined types (e.g., classes). For example, you can overload operators like +, -, =, [], (), etc., to work with objects of your class in a natural way.



## subscript overload 
done 

## new and delete Operators
- malloc() takes a single argument, which is the number of bytes to allocate.

- Unlike malloc(), calloc() takes two arguments:
Number of blocks to be allocated. 
Size of each block in bytes.
eg :
    int* allocated_with_malloc = `malloc(5 * sizeof(int));`
    int* allocated_with_calloc = `calloc(5, sizeof(int));`

## Data Conversion between Objects
eg :
int y=6;
float x=7.15;
y=x; ==> x will be converted to int and made = y ;

1. Basic to class conversion:
int y=10;
Number n1 = y;
- Using constructor and this->metres=m;

2. Class to basic 
y=n1;
using casting operator function.
eg 

3. class to class 
a). using copy constriuctor in destination.
b). using casting operator in source .
eg :
Rectangle r1(10,15);
Triangle t1 = r1; // Triangle is desti and R is source .
- DEFINE SEQUENTIALLY BOTH TIMES


## Overloading through Friend Functions

## Tracing of Memory Leaks
