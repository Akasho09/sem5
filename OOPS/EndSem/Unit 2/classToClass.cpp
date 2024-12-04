#include <iostream>
using namespace std ;

// DEFINE SEQUENTIALLY BOTH TIMES 
class distanceFeet ; // define class at top 

class distanceMetres{
    double m;
public :
distanceMetres(double n){
m=n;
}

void display () {
    cout <<"Metres : " <<m <<endl;
}

double getM() {
    return m;
}
operator distanceFeet();
};

class distanceFeet{
    double f;
public :
distanceFeet(double e){
f=e;
}
// copy 
// distanceFeet (distanceMetres &d){
// f=3.2*d.getM();
// }
void display () {
    cout <<"Feets : " <<f <<endl;
}

operator distanceMetres() {
    distanceMetres d1 (f/3.28) ;
    return d1 ;
}
};

distanceMetres :: operator distanceFeet () {
distanceFeet f (m*3.28);
return f;
}



int main () {
distanceMetres m1 = 10;
distanceFeet f1=m1;
distanceMetres m2 = f1 ;
m1.display();
f1.display();
m2.display() ;

}