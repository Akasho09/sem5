#include <iostream>
using namespace std ;

class square {
int s;
public :
square (int a) {s=a;};
int getSide() {return s;}
void display() {cout <<"side : " <<s <<endl;}

operator int() {
    return s;
}
// operator rectangle() {
//     rectangle r1 (s,s);
//     return r1;
// }
};

class rectangle {
    int l ;
    int b;
public :
rectangle(int a , int c) { l=a ; b=c; }
rectangle (square &s){
    l=s.getSide() ;
    b=l;
}
void display() {
    cout <<"Length : " <<l  <<"\nBredth : " <<b <<endl;
}

};

int main () {
square s1 = 10 ; // basic to class 
int side = s1; // class to basic 
rectangle r1 = s1 ; // class to class
s1.display() ;
r1.display() ;
cout <<"\n" <<side ;
}