#include <iostream>
#include <vector>
using namespace std;

class complex{
    public:
int x;
int y;
complex(int real, int imag){
    this->x=real;
    this->y=imag;
}
complex operator+ (complex a);
// complex operator+ (complex);
};

complex complex :: operator+ (complex c){
complex temp(0,0);
temp.x=this->x+c.x;
temp.y=y+c.y;
return temp;
}

int main () {
complex c(1,2);
complex c1(2,3);
complex c2=c+c1;
cout <<c2.x <<"   " <<c2.y <<endl;

}