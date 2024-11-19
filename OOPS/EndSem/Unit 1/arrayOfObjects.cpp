#include <iostream>
using namespace std;

class Myclass {
public :
int a ;
Myclass(){}
Myclass (int b) {
    this->a =b ;
}
void display () {
cout << "a : " <<a <<endl ;
}
~Myclass ( ) {}
};

int main () {
// Array of objects
    Myclass arr[3] = { Myclass(10), Myclass(11), Myclass(12) }; 

// Dynamically allocated array of objects
    // Myclass* arr2 = new Myclass[3] { Myclass(10), Myclass(20), Myclass(30) };
    Myclass* arr2 = new Myclass[3];
    arr2[0] = Myclass(10);
    arr2[1] = Myclass(20);
    arr2[2] = Myclass(30);

for (int i = 0; i < 3; i++) {
        arr[i].display();
    }
for (int i = 0; i < 3; i++) {
        arr2[i].display();
    }
    delete[] arr2; // Free the dynamically allocated memory

}