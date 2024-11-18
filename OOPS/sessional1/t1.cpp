// Explain how an object can be used as a function argument with the help of an 
// example program to perform the addition of two
// time objects in hour and minute format, display the result in hour: minute format.

//??????????
#include <iostream>
using namespace std;

class timee {
public: 
int hours;
int mins;

timee (){}

timee(int h,int m){
    this->hours=h;
    this->mins=m;
if(mins>59){
hours+=mins/60;
mins=mins%60;
}
if(hours>23){
    hours=hours%24;
}
}
// timee(timee &t){
// if(this->mins>59){
// this->hours+=mins/60;
// this->mins=mins%60;
// }
// this->hours=t.hours;
// this->mins=t.mins;
// }
};

timee add(timee &t1,timee &t2){
int h =t1.hours+t2.hours;
int m =t1.mins+t2.mins;
timee t3(h,m) ;
return t3; 
}

int main () {
timee t1;
t1.hours=6;
t1.mins=45;

timee t2(t1);

timee t4=add (t1,t2);
cout <<t4.hours <<" " <<t4.mins <<endl;

}