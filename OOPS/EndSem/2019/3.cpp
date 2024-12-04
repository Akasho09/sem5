#include <iostream>
using namespace std;

class Base {
protected:
    static int datal;  // Protected static data member
};

int Base::datal = 10; // Defining the static data member

class Derived : public Base {
public:
    void fun1() {
        // Accessing the protected static data member 'datal' from Base class
        cout << "Accessing static member of Base class: " << Base::datal << endl;
        
        // Alternatively, you can also use the inherited member directly
        cout << "Accessing inherited static member 'datal' directly: " << datal << endl;
    }
};

int main() {
    Derived d;
    d.fun1(); // Calls fun1() of Derived class
    
    return 0;
}
// #include <iostream>
// using namespace std;

// class Base {
// public:
//     void fun1() {
//         cout << "Base class function fun1()" << endl;
//     }
// };

// class Derived : public Base {
// public:
//     void fun1() {
//         cout << "Derived class function funct()" << endl;
//         // Accessing fun1() of the Base class within the funct() of Derived
//         Base::fun1(); // Calling fun1() from Base class
//     }
// };

// int main() {
//     Derived derivedObj;
//     derivedObj.fun1(); // Calls funct() of Derived class

//     return 0;
// }
