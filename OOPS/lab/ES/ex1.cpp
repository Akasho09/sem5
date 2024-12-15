/*
WAP in C++ to show how values can be passed to a base class constructor using
derived class constructor
*/

#include <iostream>
using namespace std ;

class Base {
int i ;
int j ;
public :
Base (int a , int b): i(a) ,j(b) {}
void display(){
    cout <<i <<" " <<j <<" " ;
}
};

class Derived : public Base{
    int k;
    int l;
public :
Derived (int a , int b , int c , int d): Base (a,b) {
    k=c; l=d;
}

void display() {
    Base :: display() ;
    cout <<k <<" " <<l <<endl;
}
};

int main () {
Derived d1 (1,2,3,4);
d1.display();

Base b1 (10,11);
b1.display() ;

}