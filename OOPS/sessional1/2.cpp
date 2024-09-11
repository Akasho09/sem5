//  Explain with example by creating STUDENT class consisting of name, enrollid and marks as class data members. 
//  Create three objects for the class using the concept of array of objects. 
//  Write member functions to read and display the student information. Also write the main program to create objects and call the member functions from the class.\

#include <iostream>
#include <string>
using namespace std;

// Define the STUDENT class
class STUDENT {
private:
    string name;       // Student's name
    int enrollid;      // Enrollment ID
    float marks;       // Marks obtained

public:
    // Member function to read student information
    void readInfo() {
        cout << "Enter student's name: ";
        cin >> name;
        cout << "Enter enrollment ID: ";
        cin >> enrollid;
        cout << "Enter marks: ";
        cin >> marks;
    }

    // Member function to display student information
    void displayInfo() const {
        cout << "Name: " << name << endl;
        cout << "Enrollment ID: " << enrollid << endl;
        cout << "Marks: " << marks << endl;
    }
};

// Main program
int main() {
    // Create an array of 3 STUDENT objects
    STUDENT students[3];

    // Read information for each student
    for (int i = 0; i < 3; i++) {
        cout << "\nEnter details for student " << i + 1 << ":" << endl;
        students[i].readInfo();
    }

    // Display information for each student
    cout << "\nDisplaying student information:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "\nStudent " << i + 1 << ":" << endl;
        students[i].displayInfo();
    }

    return 0;
}
