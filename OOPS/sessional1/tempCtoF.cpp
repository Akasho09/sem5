#include <iostream>
using namespace std;

//celcius class 
class temC {
public:
float t;
temC(float t){
    this->t=t;
}
};

//fareheit class
class temF {
public:
float t;
temF(float t){
    this->t=t;
}
//overloading operator () to convert F to C 
// returns obj of celcius 
temC operator() (){
temC t1(0);
t1.t=(1.8)*this->t+32;
return t1;
}
friend ostream& operator<< (ostream &output ,temF &f);
};


ostream & operator<< (ostream &output ,temF &f){
    // int c=(f.t-32)*5 / 8;
output << "Temperature in Fareheheit is : " << f.t <<endl
       << " and " <<endl
       <<" Temperature in Degree celcius is " <<f().t <<endl;
       return output;
}

// temF temC :: operator() (){
// temF t1(0);
// t1.t=((this->t-32)*5)/9;
// return t1;
// }

int main () {

temF F1(100);
temC C1 = F1();
cout <<F1.t <<endl;
cout <<F1().t <<endl; //converting F to C using opertor overloading & printing 
cout <<C1.t <<endl;


temF summer (100);
cout <<summer;


}