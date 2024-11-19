#include <iostream>
using namespace  std ;

class e {
public :
int a;
e(){}
e(int a){this->a=a;}
~e(){}

};

int main () {
    // Pointer to objects 
e e1(10);
e * ptr ;
cout <<ptr <<endl;
ptr = &e1;
cout <<ptr <<" " <<&e1 <<endl;
// Members can be acessed and modified using pointer 
cout <<ptr->a <<"  " <<e1.a <<endl;
ptr->a=30;
cout <<ptr->a <<"  " <<e1.a <<endl;

// array of objects
e es[3]={ e(1) , e(2) , e(3) };

}