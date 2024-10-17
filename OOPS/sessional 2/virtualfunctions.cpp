#include <iostream>
#include <cmath> // cmath for M_PI

using namespace std;

// Base class
class Shape {
public:
    // Virtual function to calculate area
    virtual double area() {
    return 0;
    } // Pure virtual function

    // Virtual destructor
    virtual ~Shape() {}
};

// Derived class: Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) {
        this->radius=r;
    }

    // Override area method for Circle
    double area() {
        return M_PI * radius * radius; // Area = πr²
    }
};

// Derived class: Rectangle
class Rectangle : public Shape {
private:
    double width, height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    // Override area method for Rectangle
    double area() {
        return width * height; // Area = width * height
    }
};

// Function to display area of a shape
void displayArea(Shape* shape) {
    cout << "Area: " << shape->area() << endl;
}

int main() {

Circle c1(5);
cout << c1.area();


    // Create instances of Circle and Rectangle
    Shape* circle = new Circle(5.0);        // Circle with radius 5.0
    Shape* rectangle = new Rectangle(4.0, 6.0); // Rectangle with width 4.0 and height 6.0

    // Display areas
    cout << "Circle: ";
    displayArea(circle);

    cout << "Rectangle: ";
    displayArea(rectangle);

    // Clean up
    delete circle;
    delete rectangle;

    return 0;
}


// #include <iostream>
// using namespace std;

// class base {
// public:
// void overriddenfunc() {
//     cout << "base class func called \n" ;
// }
// virtual void overriddenvirtualfuc (){
//         cout << "base class virtual func called \n" ;
// }

// };

// class derived : public base {
//     public:
// void overriddenfunc() {
//     cout << "Derived class func called \n" ;
// }
//  void overriddenvirtualfuc () {
//         cout << "Derived class virtual func called \n" ;
// }

// };

// int main() {
// base b;
// b.overriddenfunc();
// derived d;
// d.overriddenfunc();
// cout <<endl;

// base *bptr;
// bptr= &b;
// bptr->overriddenfunc();
// bptr->overriddenvirtualfuc();

// derived *dptr;
// dptr= &d;
// dptr->overriddenfunc();
// dptr->overriddenvirtualfuc();
// cout <<endl;

// bptr=&d;
// bptr->overriddenfunc(); // still calls base class
// bptr->overriddenvirtualfuc(); // calls derived 

// bptr=dptr;
// bptr->overriddenfunc(); // still calls base class
// bptr->overriddenvirtualfuc(); // calls derived 


// // Derived class pointer cant refer to Base class address
// // dptr=&b;
// // dptr=bptr;  // a value of type "base *" cannot be assigned to an entity of type "derived *"
// // dptr->overriddenfunc();
// // dptr->overriddenvirtualfuc();


// }