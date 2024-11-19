#include <iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "Class A" << endl;
    }
};

class B : virtual public A {
public:
    void show() {
        cout << "Class B" << endl;
    }
};

class C : virtual public A {
public:
    void show() {
        cout << "Class C" << endl;
    }
};

class D : public B, public C {
public:
    void show() {
        cout << "Class D" << endl;
    }
};

int main() {
    D obj;
    obj.showA();  
    return 0;
}
