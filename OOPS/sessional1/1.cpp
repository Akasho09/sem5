#include <iostream>
using namespace std;

class point {
double x;
double y;
public:
static int count;
//default constructor
point(){
cout << " Default Constructor called \n" ;
count++;
}
//parametrized constructor
point (double x,double y){
    cout <<" Parametrized contructor called\n" ;
this->x=x;
this->y=y;
count++;
}
//copy constructor => pass object from which we have to copy as pass by refrence 
point (point &b){
        cout <<" Copy constructor called\n" ;
    this->x=b.x;
    this->y=b.y;
    count++;
}
//deconstructor 
~point() {
cout << "Deconstructor called \n";
}

};

int point :: count = 0; //count belongs to class point 

int main () {
 point p1(1,2);
 point p2(3,4);
//  cout <<p1.count;
cout <<"No. of objects created till now : " <<point::count <<endl ;
point p3;
cout <<"No. of objects created till now : " <<point::count <<endl ;
point p4(p2);
cout <<"No. of objects created till now : " <<point::count <<endl ;

}