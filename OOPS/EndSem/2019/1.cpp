#include <iostream>
using namespace std;

class Calculator {
private:
    double value; // Single component to store the value of the calculator

public:
    // Constructor to initialize the value of the calculator
    Calculator(double v = 0) : value(v) {}

    // Overloading the + operator to perform addition
    Calculator operator+(const Calculator& other) {
        return Calculator(this->value + other.value);
    }

    // Overloading the - operator to perform subtraction
    Calculator operator-(const Calculator& other) {
        return Calculator(this->value - other.value);
    }

    // Overloading the * operator to perform multiplication
    Calculator operator*(const Calculator& other) {
        return Calculator(this->value * other.value);
    }

    // Overloading the / operator to perform division
    Calculator operator/(const Calculator& other) {
        if (other.value != 0) {
            return Calculator(this->value / other.value);
        } else {
            cout << "Error: Division by zero!" << endl;
            return Calculator(); // Return a default Calculator object on error
        }
    }

    // Getter for value
    double getValue() const {
        return value;
    }

    // Friend declaration for the << operator to access private members
    friend ostream& operator<<(ostream& os, const Calculator& calc);
};

// Overloading the << operator for Calculator class
ostream& operator<<(ostream& os, const Calculator& calc) {
    os << calc.value; // Outputs the value of the Calculator object
    return os;
}

// Main function to test the Calculator class
int main() {
    // Creating Calculator objects
    Calculator a(20), b(30), c, d, e, f;

    // Performing arithmetic operations using overloaded operators
    c = a + b;  // c = a + b
    d = a - b;  // d = a - b
    e = a * b;  // e = a * b
    f = b / a;  // f = b / a

    // Displaying the results of the operations using overloaded << operator
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;
    cout << "e = " << e << endl;
    cout << "f = " << f << endl;

    return 0;
}
