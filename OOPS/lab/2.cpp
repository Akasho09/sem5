// Write a C++ program handling the following details for students and staff using inheritance.
// • Student Details: name, address, percentage, marks
// • Staff Details: name, address, salary
// Create appropriate base and derived classes. Input the details and output them.

#include <iostream>
#include <string>
using namespace std;

class persons{
    public:
    string name;
    string address;
};

class students : public persons {
    public:
int percentage;
int marks;

void printstudentdetails();
void inputstudentdetails();

};

class staff : public persons {
    public:
    int salary;

    void printstaffdetails();
    void inputstaffdetails();

};

void students :: printstudentdetails() {
cout <<this->name <<endl;
cout <<this->address <<endl;
cout <<this->percentage <<endl;
cout <<this->marks <<endl;
}

void staff :: printstaffdetails() {
cout <<this->name <<endl;
cout <<this->address <<endl;
cout <<this->salary <<endl;
}

void students :: inputstudentdetails(){
cin >> this->name;
cin >> this->address;
cin >> this->percentage;
cin >> this->marks;
}

void staff :: inputstaffdetails(){
cin >> this->name;
cin >> this->address;
cin >> this->salary;
}

int main() {
students s1;
s1.name="akash";
s1.marks=90;
s1.printstudentdetails();

staff ss1;
ss1.inputstaffdetails();

}