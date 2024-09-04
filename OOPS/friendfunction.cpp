#include <iostream>
using namespace std;

class weight {
int kg;
int g;
public:
weight (int kilos, int grams){
kg=kilos;
if (grams>1000){
    kg+=grams/1000;
    g=grams%1000;
}
else g=grams;
}
void display() {
    cout <<kg << " kg " <<g << " grams " <<endl;
}
void f1();
friend void randomfunction(weight w);

};
void weight :: f1(){
    cout <<kg << " kg " <<g << " grams " <<endl;
}
// void f1(){
//         cout <<kg << " kg " <<g << " grams " <<endl;
// }

//if any function if is using objects of this class and 
// needs acess to private and protected variables , 
// we declare it inoriginal class as friend function
void randomfunction(weight w){
    cout <<w.kg << " kg " <<w.g << " grams " <<endl;
}


int main () {
weight w1(60,900);
weight w2(44,1200);
w1.display();
w2.display();
w1.f1();
randomfunction(w1);

//copy objects
weight w4=w1;
cout <<endl;
w4.display();
weight w5(w1);
cout <<endl;
w5.display();

}