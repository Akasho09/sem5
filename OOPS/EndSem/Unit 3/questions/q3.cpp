#include <iostream>
using namespace std ;

class Shape {
    double a;
    double b;
public :
Shape(double a , double b) {
    this->a =a ;
    this->b =b;
}
double getA() { return a ; }
double getB() {return b  ; }
virtual void display_area() { }

};

class Triangle : public Shape {
    public :
Triangle(double a , double b) : Shape(a,b){} ;
void display_area() {
double b= Shape::getA();
double h= Shape::getB();
cout <<"Area is : " <<(b*h)/2 <<endl;
}
};

class Rectangle :  public Shape {};
int main () {
Triangle t1 (10,5.5);
t1.display_area() ;

}