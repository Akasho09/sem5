#include <iostream>
using namespace std;

class Base {
public :
Base () {
    cout << "Base constructor called\n";
}
virtual ~Base () {
    cout <<"Base Destructor\n";
}
};
 
class Derived : public Base {
public :
Derived () {
    cout <<"Derived constructor called\n" ;
}
~Derived () {
cout <<"Derived Destructor\n";
}
};

int main() {
// Derived *d1 = new Derived();
// delete d1 ; // Derived Destructor  Base Destructor

Base *d2 = new Derived();
delete d2 ; // Base Destructor if ~Base isnt virtual


}
