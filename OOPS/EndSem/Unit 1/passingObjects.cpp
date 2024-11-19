#include <iostream>
using namespace std;

class car {
public :
string name ;
car (string s) {
    this->name = s;
}
};

void fn (car &car1) {
cout << car1.name <<endl ;
}

car fn2 (car &c) {
string s = c.name + " aksh";
car c2(s);
return c2;
}

int main () {
car c1("ford");
fn(c1);
// Returning Objects from Functions
car c3 = fn2(c1);
fn(c3); 
}