#include <iostream>
using namespace std;

class Test {
int a ;
public :

void* operator new (size_t size) {
cout <<"Allocate memory using new overload " << size <<" bytes\n";
void * p = malloc(size);
return p;
}

void operator delete (void *p) {
cout << "Custom delete operator." << endl;
free(p);
}

};

int main () {

Test* t1 = new Test () ;
delete t1 ;
return 0 ;

}