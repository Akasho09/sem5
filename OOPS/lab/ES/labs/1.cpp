/*
WAP in C++ to print your name, roll number,
address and university name. Input is given by the
user.
1B.
WAP in C++ to declare a structure. Initialise
and display contents of member variables
(name, roll number and marks).
*/
#include <iostream>
using namespace std ;

struct s {
    int x ;
    int y;
s() {
    cout <<"Struct constructor called \n";
}
};

class student {
    string name ;
    int rollNo ;
public :
student () {
    cout << "Defaukt constructor called \n" ;
}
    void inputDetails() {
        cout << "Enter name: ";
        getline (cin , name) ;
        cout << "Enter roll number: ";
        cin >> rollNo;
        cin.ignore() ;
    }

};

int main () {
    struct s s1 ; // or s s1 only 
        student s[3]; // Array of 3 student objects
    for (int i = 0; i < 3; i++) {
        cout << "Enter details for student " << i + 1 << ": " << endl;
        s[i].inputDetails();
    }
  

}