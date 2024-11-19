#include <iostream>
using namespace std;

class Complex {
public:
    int real, imag;

    // Constructor to initialize real and imaginary parts
    Complex(int r, int i) : real(r), imag(i) {}

    // Overloading the + operator
    Complex operator + (const Complex& other) {
        // Add real and imaginary parts separately
        return Complex(real + other.real, imag + other.imag);
    }

    // Function to display the complex number
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4), c2(1, 2);

    Complex c3 = c1 + c2; // Using overloaded + operator
    c3.display(); // Output: 4 + 6i

    return 0;
}
