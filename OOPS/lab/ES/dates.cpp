/*
Design and implement a class named Date that contains three private data
members month, day and year that provides the following functionality :-- Creating a date
with default values (zero).
- Setting the value of date at the time of creation.
- Changing
values (day, month or year separately or combine) of any date.
- Getting values (day, month
or year separately) of any date.
- Displaying date value.
- Keep track of how many dates are
created in a program and a function to access this value.
- Overload the following operators
for comparing two dates.
a) One date is less than other ( < )
b) One date is greater than other ( > )
c) Two dates are equal ( == )
d) Two dates are not equal (!= )
e) Increment 1 in day value of date ( ++ ) both pre and post
f) Decrement 1 in day value of date (-- ) both pre and post
*/

#include <iostream>
using namespace std ;

class Date{
    int d;
    int m;
    int y;
public :
    static int count;
Date(): d(0) , m(0) , y(0) {count++ ;}
void handle(){
    if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12 ){
        if(d>31){
            m++;
            d-=31;  // Correct adjustment
        }
    } else if(m==4 || m==6 || m==9 || m==11){  // Handle months with 30 days
        if(d>30){
            m++;
            d-=30;  // Adjust day
        }
    } else if(m==2){  // Handle February
        if(d>28 && ( y%4!=0 || (y%100==0 && y%400!=0)) ) {  // Non-leap year
            m++;
            d-=28;  // Adjust day
        } else if( (y%4==0 && y%100!=0 ) || y%400==0){  // Leap year
            if(d>29){ 
                m++; 
                d-=29; 
            }
        }
    }
    
    // If month exceeds 12, adjust year and month
    if(m>12){
        y++;
        m-=12;
    }
}

Date(int a , int b , int c) {
    d=a;
    m=b;
    y=c;
    count++ ;
    handle();
}
void display(){
    cout <<(d<10 ? "0" : "") <<d <<"/" <<(m<10 ? "0" : "") <<m <<"/" <<y <<endl ;
}

bool operator< (Date &d1) {
    if(y<d1.y){
        return true;
    }
    return false ;
}

bool operator> (Date & d2){
    if(y>d2.y){
        return true;
    }
    return false ;
}

bool operator== (Date & d) {
    if(y==d.y && m==d.m ){
        return true;
    } return false ;
}

// pre
Date operator++(){
    Date t(++d, m ,y );
    handle();
    return t;
}

//post
Date operator++(int){
    Date t(d++ , m , y);
        handle();
    return t;
}

};

int Date :: count = 0;

int main () {
    Date d1(30,12,2023);
    Date d2 (3,6,2025);
    Date d3 (12,6,2025);
    d1.display();
    d2.display();
    cout << Date::count <<endl;
    cout << (d1<d2) <<endl;
    cout << (d1>d2) <<endl;
    cout << (d1==d2) <<endl;
    cout << (d3==d2) <<endl;

    Date d4 = d1++;
    d4.display();
    Date d5 = ++d1;
    d1++;
    d5.display();
    d1.display();

}