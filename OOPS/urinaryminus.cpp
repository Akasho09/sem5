#include <iostream>
using namespace std;

class dimensions {
    int x;
    int y;
    public :
dimensions(){};
dimensions(int x, int y){
this->x=x;
this->y=y;
    }
void display(){
    cout << x << "," <<y <<endl;
}  

dimensions operator-();
friend dimensions operator+(dimensions &p);

};

dimensions dimensions :: operator-() {  
    dimensions image;
image.x=-x;
image.y=-y;
return image;
}

dimensions operator+ (dimensions &p){
return p;
}



int main () {
dimensions p1(10,-3);

dimensions imageofp1;
imageofp1=-p1;
p1.display();
imageofp1.display();

dimensions positiveofp1;
positiveofp1=+p1;
positiveofp1.display();


}