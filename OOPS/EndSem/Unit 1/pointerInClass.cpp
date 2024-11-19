#include <iostream>
using namespace std ;
// PADDING IN CLASSES FOR ALLIGNMENT OF DATA MEMBERS
class Example {
int *ptr ; // 8 bytes
int p2;  // 4 bytes but adds {8} // 4 bytes, but requires padding for alignment
string *s; // 8 bytes
string s2; // 24 bytes 
int * arr; // 8 bits // can be used to implement dynanmically declare array

public :
Example() {
    ptr = new int ;
    s= new string ; // not necessary to write ???
    // arr = new int[0];
    cout << "Memory Allocated \n" ;
}
void setValue (int i , string str ) {
    *ptr = i;
    *s = str;
}
void display () {
    cout <<*ptr <<"  " <<*s <<endl;
}
~Example() {
    delete ptr ;
    delete s;
    cout << "Releases Memory\n" ;
}
};

int main () {
Example e1 ;
Example e2 ;
Example e3 ;
Example e4 ;
Example e5 ;

cout <<&e1 <<endl <<&e2 <<endl <<&e3 <<endl <<&e4 <<endl <<&e5 <<"\n\n\n";
cout <<sizeof(e1) <<endl;
// e1.setValue(10 , "akash");
cout <<sizeof(e2) <<endl;
e1.display() ;


}