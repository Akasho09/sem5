#include <iostream>
using namespace std ;

// DEFINE SEQUENTIALLY BOTH TIMES 

class distanceMetres{
    int m;
public :
distanceMetres(int n){
m=n;
}

void display () {
    cout <<"Metres : " <<m <<endl;
}

int getM() {
    return m;
}
// operator distanceFeet() {
// distanceFeet f (m*3.2);
// return f;
// }
};


class distanceFeet{
    int f;
public :
distanceFeet(int e){
f=e;
}
// copy 
distanceFeet (distanceMetres &d){
f=3.2*d.getM();
}
void display () {
    cout <<"Feets : " <<f <<endl;
}

};

int main () {
distanceMetres m1 = 10;
distanceFeet f1=m1;
m1.display();
f1.display();

}