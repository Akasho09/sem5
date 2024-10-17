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


    // // Create instances of Circle and Rectangle
    // Shape* circle = new Circle(5.0);        // Circle with radius 5.0
    // Shape* rectangle = new Rectangle(4.0, 6.0); // Rectangle with width 4.0 and height 6.0

    // // Display areas
    // cout << "Circle: ";
    // displayArea(circle);

    // cout << "Rectangle: ";
    // displayArea(rectangle);

    // // Clean up
    // delete circle;
    // delete rectangle;

    // return 0;
}
