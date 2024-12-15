#include <iostream>
#include <string>
using namespace std;

class H24; // Forward declaration of 24-hour class

// 12-hour format class
class H12 {
    int h;      // Hours
    int m;      // Minutes
    string period; // AM or PM

public:
    // Default constructor
    H12() : h(0), m(0), period("AM") {}

    // Parameterized constructor
    H12(int hours, int minutes, string ampm) {
        h = hours;
        m = minutes;
        period = ampm;
    }

    // Conversion constructor: Convert from H24 to H12
    H12(const H24 &t1);

    // Function to display time in 12-hour format
    void print() const {
        cout << "Time in 12-hour format: " << h << ":" 
             << (m < 10 ? "0" : "") << m << " " << period << endl;
    }
};

// 24-hour format class
class H24 {
    int h; // Hours
    int m; // Minutes

public:
    // Parameterized constructor
    H24(int hours, int minutes) {
        h = hours;
        m = minutes;

        // Normalize time
        if (m > 59) {
            h += m / 60;
            m = m % 60;
        }
        if (h >= 24) {
            h = h % 24;
        }
    }

    // Accessor methods
    int getH() const { return h; }
    int getM() const { return m; }

    // Function to display time in 24-hour format
    void print() const {
        cout << "Time in 24-hour format: " << h << ":" 
             << (m < 10 ? "0" : "") << m << endl;
    }

    // Conversion operator to H12
    // operator H12() const {
    //     int hours = h % 12;    // Convert hours to 12-hour format
    //     if (hours == 0) hours = 12; // Adjust for edge cases like 0 or 12
    //     string ampm = (h < 12) ? "AM" : "PM";
    //     return H12(hours, m, ampm);
    // }
};

// // Conversion constructor definition: H24 -> H12
H12::H12(const H24 &t1) {
    int hours = t1.getH() % 12;
    if (hours == 0) hours = 12; // Adjust edge cases
    h = hours;
    m = t1.getM();
    period = (t1.getH() < 12) ? "AM" : "PM";
}

int main() {
    // Create a time object in 24-hour format
    H24 h1(15, 45); // 3:45 PM
    cout << "\nInput Time:\n";
    h1.print();

    // Use conversion operator
    H12 h2 = h1;

    cout << "\nConverted Time:\n";
    h2.print();

    return 0;
}
