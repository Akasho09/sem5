#include <iostream>
using namespace std;

class base {
public:
void overriddenfunc() {
    cout << "base class func called \n" ;
}
virtual void overriddenvirtualfuc (){
        cout << "base class virtual func called \n" ;
}

};

class derived : public base {
    public:
void overriddenfunc() {
    cout << "Derived class func called \n" ;
}
 void overriddenvirtualfuc () {
        cout << "Derived class virtual func called \n" ;
}

};

int main() {
base b;
b.overriddenfunc();
derived d;
d.overriddenfunc();
cout <<endl;

base *bptr;
bptr= &b;
bptr->overriddenfunc();
bptr->overriddenvirtualfuc();

derived *dptr;
dptr= &d;
dptr->overriddenfunc();
dptr->overriddenvirtualfuc();
cout <<endl;

bptr=&d;
bptr->overriddenfunc(); // still calls base class
bptr->overriddenvirtualfuc(); // calls derived 

bptr=dptr;
bptr->overriddenfunc(); // still calls base class
bptr->overriddenvirtualfuc(); // calls derived 


// Derived class pointer cant refer to Base class address
// dptr=&b;
// dptr=bptr;  // a value of type "base *" cannot be assigned to an entity of type "derived *"
// dptr->overriddenfunc();
// dptr->overriddenvirtualfuc();


}