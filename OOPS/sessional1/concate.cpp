#include <iostream>
using namespace std;

class strrep{
public:
string s;

strrep(string s){
    this->s=s;
}

//prefixadd
void operator++ ();
//postfixadd
void operator++(int);

};

void strrep :: operator++(){
    this->s=this->s+this->s; 
}

void strrep:: operator++(int){
    this->s=this->s+this->s; 
}




int main () {
strrep s1("akash");
cout <<s1.s <<endl;
++s1;
cout <<s1.s <<endl;

s1++;
cout <<s1.s <<endl;

}