#include <iostream>
using namespace std;

class Printer {
public:
    // Overloaded function to print an integer
    void print(int x) {
        cout << "Integer: " << x << endl;
    }

    // Overloaded function to print a float
    void print(float x) {
        cout << "Float: " << x << endl;
    }

    // Overloaded function to print a string
    void print(string x) {
        cout << "String: " << x << endl;
    }
};

int main() {
    Printer p;
    p.print(5);          // Calls print(int)
    p.print(5.5f);       // Calls print(float)
    p.print("Hello");    // Calls print(string)
    return 0;
}
