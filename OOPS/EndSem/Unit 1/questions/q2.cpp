/*
Q1 (b):
In object-oriented programming, we can create a class that helps to find the solution to a mathematical equation. 
One of the equations we often need to solve in algebra is the quadratic equation as shown below:

The phrase inside the parentheses is called the discriminant.

If the value of the discriminant is positive, the equation has two roots.
If it is zero, the equation has one root.
If it is negative, the equation has no roots.
Write a program in C++ that finds the root of a quadratic equation when the coefficients 
a, b and c ae iffven
*/

/// IMPS
// a!=0
//  use double

#include <iostream>
#include <cmath>
using namespace std;

class QuadraticEquation {
private:
    double a, b, c;

public:
    // Constructor to initialize coefficients
    QuadraticEquation(double coeffA, double coeffB, double coeffC) {
        a = coeffA;
        b = coeffB;
        c = coeffC;
    }

    // Function to calculate the discriminant
    double getDiscriminant() {
        return (b * b) - (4 * a * c);
    }

    // Function to calculate and display the roots
    void findRoots() {
        double discriminant = getDiscriminant();

        if (discriminant > 0) {
            // Two distinct roots
            double root1 = (-b + sqrt(discriminant)) / (2 * a);
            double root2 = (-b - sqrt(discriminant)) / (2 * a);
            cout << "The equation has two distinct roots:\n";
            cout << "Root 1 = " << root1 << "\n";
            cout << "Root 2 = " << root2 << "\n";
        } else if (discriminant == 0) {
            // One root
            double root = -b / (2 * a);
            cout << "The equation has one root:\n";
            cout << "Root = " << root << "\n";
        } else {
            // No real roots
            cout << "The equation has no real roots.\n";
        }
    }
};

int main() {
    double a, b, c;

    // Input coefficients from the user
    cout << "Enter coefficients a, b, and c of the quadratic equation (ax^2 + bx + c = 0):\n";
    cin >> a >> b >> c;

    // Validate that 'a' is not zero
    if (a == 0) {
        cout << "Invalid input: 'a' cannot be zero for a quadratic equation.\n";
        return 1;
    }

    // Create an instance of the QuadraticEquation class
    QuadraticEquation equation(a, b, c);

    // Find and display the roots
    equation.findRoots();

    return 0;
}

