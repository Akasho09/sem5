/*
Q.NO.7A. WAP in C++ to implement the concept of virtual base class.
*/

#include <iostream>
using namespace std ;

class Base {

public:
void fn() {
    cout << "Base fn \n" ;
}
};

class Derived1 : virtual public Base{

public :
void fn() {
    cout <<"Derived 1 fn \n" ;
}
};

class Derived2 : virtual public  Base {

public:
void fn() {
    cout << "Derived 2 \n" ;
}
};

class SubDerive : public Derived1 , Derived2 {

public:
void fn() {
    cout <<"SubDerive 1 \n ";
    Base::fn();
}


};

int main () {

}