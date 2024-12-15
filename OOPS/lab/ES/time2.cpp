/*
 Write a program in c++ to convert time in 24hrs to 12hrs using classes with the following criteria
Conversion logic in destination class
Conversion logic in source class
*/
/*
copy constructor both And Declare before 
*/
#include <iostream>
using namespace std ;

// class H12;
class H24;

class H12 {
    int m;
    int h;
    string AMorPM;
public: 
H12(int h , int m , string s){

    this->h=h;
    this->m=m;
    this->AMorPM=s;
}
int getM(){return m;}
int getH(){return h;}
string getAMorPM (){return AMorPM; }

// dest copy const in source to convert
    H12( H24 &t1);

void print(){
    if(m>59){
        h+=m/60;
        h=h%60;
    }
        if(h>23){
            h=h%24;
            AMorPM="AM";
        } else if (h>11){
            h=h%12;
            AMorPM="PM";
        }
    if(h==0 ) h=12;
     cout <<h <<" : " <<m <<" " <<AMorPM <<endl;
}

// operator overload to convert 12 to 24 hour
// operator H24(){
//     int a=h;
//     if(AMorPM=="PM") {
//      a+=12;
//     }
//     if(h==12){
//         a=12;
//     }
//     if(h==24) a=0;
//      H24 temp(a,m);
//      return temp;
// }
};


class H24{
    int m;
    int h;
public: 
H24(int h , int m){
    this->h=h;
    this->m=m;
}
int getM(){return m;}
int getH(){return h;}

H24 (H12 & t1 ) {
this->h=t1.getH();
if(t1.getAMorPM()=="AM"){
         this->h=t1.getH()+12;   
    }
    this->m=t1.getM();
}
// // operator oLoad in dest 
// operator H12(){
//     string s="AM";
//     if(h>11) s="PM";
//     H12 temp(h%12,m,s);
//     return temp;
// }

void print(){
    if(m>59){
        h+=m/60;
        h=h%60;
    }
    if(h>23){
            h=h%24;
        }
        cout <<h <<" : " <<m <<endl;
}
};

H12::H12 ( H24 & t1){
    h=t1.getH();
    m=t1.getM();
    AMorPM="AM";

}

int main () {
    H24 h1 (12,40);
    H12 h2 = h1 ; // Ambuigity if both used 
    h2.print();

    h1.print();
    H24 h3 = h2;
    h3.print();

    H12 h(12,15,"PM");
    H24 h4 = h;
    h4.print();

}