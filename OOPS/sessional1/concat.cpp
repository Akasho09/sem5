#include <iostream>
using namespace std;

class strrep{
public:
string s;

strrep(string s){
    this->s=s;
}

//prefixadd
strrep operator++ ();
//postfixadd
strrep operator++(int);

};

strrep strrep :: operator++(){
    this->s=this->s+this->s; 
    return *this;
}

strrep strrep:: operator++(int){
    strrep temp (this->s) ;
    this->s=this->s+this->s; 
    return temp;
}

int main () {
strrep s1("akash");
cout <<s1.s <<endl;
++s1;
cout <<s1.s <<endl;

strrep s3 = s1++;
cout <<s3.s <<endl; // pre
cout <<s1.s <<endl; // after

}