#include <iostream>
using namespace std;

class Number {
int a;
public :
Number (int b) {
a=b;
}
// writing this we also cout <<obj directly
operator int() {
    return a;
}

};

int main () {
Number n1 =10;
int b=n1;
cout <<n1 <<" " <<b <<endl;

}