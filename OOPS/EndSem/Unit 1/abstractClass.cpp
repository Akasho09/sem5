#include <iostream>
using namespace std ;

class Shape {
    public :
    virtual void Area () = 0 ;
    virtual void Perimeter () = 0 ;
    
    /*
    In the example above, Area() is a pure virtual function because it is followed by = 0, and this class becomes abstract.*/
};

class circle : public Shape {
    public :
    int radius ;
circle(int r) {
    this->radius=r;
}
void Area() {
    float a = 3.14*float(radius)*float(radius) ;
    cout << "Area : " <<a ;
};
void Perimeter() {};
};

int main () {
circle c1(5) ;
c1.Area();

}