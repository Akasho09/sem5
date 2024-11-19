#include <iostream>
using namespace std ;
// Overloading = for Deep Copy
class strEx {
    string *s;
public :
strEx() {
    s= new string("");
}
strEx(string a){ 
    s= new string(a);
}

void display () { cout <<*s <<endl; }

void operator= (strEx& a) {
if (this != &a) *s = *a.s;  
}

~strEx() {
delete s;  
}
};

int main () {
strEx s1("akash");
strEx s2 ;
s2=s1;
// strEx s2(s1);

s1.display() ;
s2.display() ;

}