/*
Design a program in C++ that models the interaction Between students and courses
in a university system. The System Should allow students to enrol in courses and withdraw
from them, while each course has a maximum capacity of Students that can be enrolled.
The system should use two classes, Student and Course, which communicate with each
other. The course will keep track of enrolled students and allow the addition and removal of
students based on their IDs.
*/

#include <iostream>
using namespace std ;
class Course ;
class Student {
    string name ;
    int rollNo ;
public :
Student() {}
Student(int r , string n) :name(n),rollNo(r) {}
void enrollInCourse(Course &c);
void print() {
    cout <<"Roll No : " <<rollNo <<endl << "Name: " <<name   <<endl ;
}
};

class Course {
    int Cid ;
    string Cname ;
    int capacity;
    vector<Student*> studentsEnrolled; 
public :
Course () {}
Course(int id , string name , int c){
    Cid=id;
    Cname=name;
    capacity=c;
}
// pointer pass
void enrollStudent(Student *s) {
    if(studentsEnrolled.size()<capacity){
    studentsEnrolled.push_back(s);
    }
    else {
        cout <<"Max Enroled\n";
    }
}

void printStudentsEnrolled(){
    cout<<"Course name : " <<Cname <<endl;
            cout <<"--------------------\n";
for(int i=0;i<studentsEnrolled.size();i++){
        studentsEnrolled[i]->print();
    }
            cout <<"--------------------\n";
}
};

void Student :: enrollInCourse( Course &c) {
c.enrollStudent(this);
}



int main() {

    // Creating some students
    Student s1( 1 , "John Doe");
    Student s2(2, "Alice Smith");
    Student s3(3, "Bob Johnson");
    
    Course course1(501 , "Data Structures", 10 );

    s1.enrollInCourse(course1);
    s2.enrollInCourse(course1);

    course1.printStudentsEnrolled();

    }