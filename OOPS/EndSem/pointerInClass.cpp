#include <iostream>
using namespace std ;

class Example {
int *ptr ;

public :
Example() {
    ptr = new int ;
    cout << "Memory Allocated \n" ;
}
void setValue (int i ) {
    *ptr = i;
}
~Example() {
    delete ptr ;
    cout << "Releases Memory\n" ;
}
};

int main () {
Example e1 ;
cout <<sizeof(e1) <<endl;
e1.setValue(10);
cout <<sizeof(e1) <<endl;

}