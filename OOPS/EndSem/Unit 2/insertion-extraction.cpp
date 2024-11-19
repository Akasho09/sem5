/* 'Overloading of stream insertion operator “<<” and extraction operator “>>” '
1. cout is an object of ostream class and cin is an object of istream class 
2. These operators must be overloaded as a global function.And if we want to allow them to access private data members of the class, we must make them friend. 
because In operator overloading, if an operator is overloaded as a member, then it must be a member of the object on the left side of the operator.

"synatx" :  
friend istream & operator>> (istream &cin ,weight &w);
1. These operators are overloaded as GLOBAL function with two parameters, cin and object of user-defined class.
2. Return type is " RETURN BY REFRENCE " .
3. 2 EXPLICIT arguments passed by refrence each (for cin particularly);
*/
#include <iostream>
using namespace std;

class weight {
int kg;
int g;
public:
weight(){}
weight (int kilos, int grams){
kg=kilos;
if (grams>1000){
    kg+=grams/1000;
    g=grams%1000;
}
else g=grams;
}
void display() {
    cout <<kg << " kg " <<"and" <<g  << " grams " <<endl;
}
friend istream & operator>> (istream &cin ,weight &w);
friend ostream & operator<< (ostream &o, weight &w);
};

istream& operator>> (istream & i ,weight &w){
cout << "Input Kgs \n" ;
cin >> w.kg;
cout << "Input Grams \n" ;
cin >> w.g;
return i;
}
ostream& operator<< (ostream & o, weight &w){
    o <<w.kg << " kg " <<"and " << w.g <<" grams " <<endl;
    return o;
}

int main () {
weight w1(60,900);
weight w2(44,1200);
w1.display();
w2.display();
weight w3;
cin>>w3;
w3.display();
cout <<w3;
cout <<w2;


}