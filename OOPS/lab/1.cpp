//Write a program to implement STUDENT class consisting of name, enrollId and marks as class data members. 
// Create three objects for the class using the concept of array of objects.
//  Write member functions to read and display the student information.
//  Also write the main program to create objects and call the member functions from the class.

#include <iostream>
#include <string>
using namespace std;

class student {

string name;
int roll;
char enrollID[9];

public:
void setname(string name){
    this->name=name;
}
void setroll(int roll){
    this->roll=roll;
}
void setenroll(char enroll[]){
for (int i=0;i<sizeof(enroll)/sizeof(char);i++){
    this->enrollID[i]=enroll[i];
}
}
void getenrollid (){
  cout <<this->enrollID;  
}
void getname (){
  cout <<this->name;  
}
void getroll (){
  cout <<this->roll;  
}

};


int main ( )  {
student student_s[3];
student_s[1].setenroll("22BCS006");
student_s[1].getenrollid();

}