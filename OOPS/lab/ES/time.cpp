#include <iostream>
#include <string>
using namespace std;

class Time24; // Forward declaration

class Time12 {
    int hour;
    int minute;
    string period; // AM or PM

public:
    // Constructor to initialize 12hr time
    Time12() : hour(0), minute(0), period("AM") {}

    void displayTime() const {
        cout << "Time in 12-hour format: " << hour << ":" 
             << (minute < 10 ? "0" : "") << minute << " " << period << endl;
    }

    // Conversion logic from Time24 (source) to Time12 (destination)
    void convertFrom24(const Time24 &t);
};

class Time24 {
    int hour;
    int minute;

public:
    // Constructor to initialize 24hr time
    Time24(int h = 0, int m = 0) : hour(h), minute(m) {}

    void inputTime() {
        cout << "Enter time in 24-hour format (HH MM): ";
        cin >> hour >> minute;
        if (hour < 0 || hour > 23 || minute < 0 || minute > 59) {
            cout << "Invalid input! Try again.\n";
            inputTime();
        }
    }

    void displayTime() const {
        cout << "Time in 24-hour format: " << hour << ":"
             << (minute < 10 ? "0" : "") << minute << endl;
    }

    // Provide access to Time12 for conversion
    friend void Time12::convertFrom24(const Time24 &);
    
};

// Conversion logic in Time12
void Time12::convertFrom24(const Time24 &t) {
    minute = t.minute;
    if (t.hour == 0) {
        hour = 12;      // Midnight
        period = "AM";
    } else if (t.hour < 12) {
        hour = t.hour;
        period = "AM";
    } else if (t.hour == 12) {
        hour = 12;      // Noon
        period = "PM";
    } else {
        hour = t.hour - 12;
        period = "PM";
    }
}

int main() {
    Time24 time24;
    Time12 time12;

    time24.inputTime();
    time12.convertFrom24(time24);

    time24.displayTime();
    time12.displayTime();

    return 0;
}
