#include <iostream>
using namespace std;

class Base {
int a ;
public:
Base () {}
 virtual void fn () {
    cout <<" Base function \n" ;
}
};

class Derived : public Base {
public :
void fn () {
    cout << " Derived Function\n" ;
}
};
int main () {
// Derived d1;
// d1.fn();

Derived * d2 = new Derived();
d2->fn();

Base *d3 = new Derived() ;
d3->fn() ; // calls base fn if that is not virtual 

}