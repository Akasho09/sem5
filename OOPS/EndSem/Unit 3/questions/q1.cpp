/*
In C++, an abstract base class (ABC) is a class that cannot be instantiated and
 is designed to be a base class for other classes. 
It typically contains at least one pure virtual function.
 A pure virtual function is a function declared with the = 0 syntax.
*/
/*
Any class derived from the abstract base class must override the pure virtual function.
Call base fn ==>  base :: display() 
pass values ===>  :base(a,b) at starting only 
*/
#include <iostream>
using namespace std ;

class Figure { // abstract fig class 
    virtual void details() = 0;
public :
Figure() {
    cout <<"Figure Class \n" ;
}
~Figure () {
    cout << "Figure Decomstructor \n" ;
}
};

class Closed : public Figure {
    int Area ;
    int Perimeter ;
public :
Closed () {
    cout <<"Closed calss called \n" ;
}
Closed (int a , int b) {
    cout <<"Closed calss called \n" ;
    Area=a ;
    Perimeter=b;
}
void display(){
     cout << "Area : " <<Area << " P: " <<Perimeter <<endl;
}
void details(){
    cout << "Closed Figures have a Area and circumference or perimeter\n" ;
};
~Closed() {
    cout << "Closed decpnstrccutor\n" ;
}
};

class Polygon :  public Closed {
    int sides ;
public :
Polygon  () {
    cout << "Polygon constructor \n" ;
}
Polygon (int s) : Closed(0,0) {
        cout << "Polygon constructor \n" ;
this->sides = s;
}
void display()  {
          Closed::display() ;
          cout << "Sides : " <<sides ;
}
~Polygon  () {
        cout << "Polygon destructor \n" ;
}
void details () {
    cout <<"Polygon has fixed sides and is made of line segments \n " ;
}
};

class Open : public Figure {

};
int main() {

Closed circle ;
Polygon square (4);
square.display() ;


    cout << "\nAll figures will now be destroyed:\n";

}