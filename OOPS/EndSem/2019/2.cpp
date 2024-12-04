/*
Create two classes DM and DB which store the value of distances. DM stores
distances in meters and centimeters and DB in feer and inches. Write a program that
can read values for the class objects and add one object of DM with another object
ofDB. Use a friend function to carry out the addition operation. The object that stores
the results may be a DM object or DB object, depending on the units in which the
results are required. The display should be in the format of feet and inches or meters
and centimeters depending on the object on display. (1 Feet =0.3048Meter, IMeter
=3.28 Feet, lInch=2.54 Centimeter, 1Centimeter = 0.3937 Inch)
*/

#include <iostream>
using namespace std;

class DB;  // Forward declaration of class DB

// Class to represent distance in meters and centimeters
class DM {
private:
    int meters;
    int centimeters;

public:
    // Constructor to initialize distance
    DM(int m = 0, int cm = 0) : meters(m), centimeters(cm) {}

    // Friend function to add DM and DB objects
    friend void addDistance(DM &d, DB &b);

    // Display the distance in meters and centimeters
    void display() const {
        cout << "Distance in DM: " << meters << " meters and " << centimeters << " centimeters." << endl;
    }

    // Method to convert DM to DB (meters to feet, centimeters to inches)
    void convertToDB(DB &b);
};

// Class to represent distance in feet and inches
class DB {
private:
    int feet;
    int inches;

public:
    // Constructor to initialize distance
    DB(int f = 0, int i = 0) : feet(f), inches(i) {}

    // Friend function to add DM and DB objects
    friend void addDistance(DM &d, DB &b);

    // Display the distance in feet and inches
    void display() const {
        cout << "Distance in DB: " << feet << " feet and " << inches << " inches." << endl;
    }

    // Method to convert DB to DM (feet to meters, inches to centimeters)
    void convertToDM(DM &d);
};

// Function to add DM and DB objects
void addDistance(DM &d, DB &b) {
    // Convert DB distance to meters and centimeters
    int totalInches = b.feet * 12 + b.inches;  // Convert feet and inches to total inches
    double totalCentimeters = totalInches * 2.54;  // Convert inches to centimeters
    double totalMeters = totalCentimeters / 100;  // Convert centimeters to meters

    // Convert the meters to a DM object
    d.meters += totalMeters;  // Add the meters part to the DM object
    d.centimeters += totalCentimeters;  // Add the centimeters part to the DM object

    // Handle the case where centimeters exceed 100
    if (d.centimeters >= 100) {
        d.meters += d.centimeters / 100;
        d.centimeters = d.centimeters % 100;
    }
}

// Method to convert DM to DB (meters to feet, centimeters to inches)
void DM::convertToDB(DB &b) {
    double totalMeters = meters + centimeters / 100.0;  // Convert DM to total meters
    double totalFeet = totalMeters * 3.28;  // Convert meters to feet
    int feet = static_cast<int>(totalFeet);  // Get the feet part
    double inches = (totalFeet - feet) * 12;  // Get the inches part

    b.feet = feet;
    b.inches = static_cast<int>(inches);
}

// Method to convert DB to DM (feet to meters, inches to centimeters)
void DB::convertToDM(DM &d) {
    double totalFeet = feet + inches / 12.0;  // Convert DB to total feet
    double totalMeters = totalFeet * 0.3048;  // Convert feet to meters
    double totalCentimeters = (totalFeet - static_cast<int>(totalFeet)) * 12 * 2.54;  // Convert the fractional feet to centimeters

    d.meters = static_cast<int>(totalMeters);
    d.centimeters = static_cast<int>(totalCentimeters);
}

int main() {
    // Create DM and DB objects
    DM dm1(5, 50);  // 5 meters 50 centimeters
    DB db1(10, 5);  // 10 feet 5 inches

    // Display the distances
    dm1.display();
    db1.display();

    // Add DM and DB objects using the friend function
    addDistance(dm1, db1);

    // Display the result in DM (meters and centimeters)
    dm1.display();

    // Convert the result back to DB (feet and inches)
    db1.convertToDB(dm1);
    db1.display();

    return 0;
}
