//?????
#include <iostream>
#include <string>
using namespace std;

class car{

public: 
int price;
string brandname;
char owner[10];
static int inventionyear;

//parametrized constructor
car (int price,string brandname,char owner[]){
this->price=price;
this->brandname=brandname;
strcpy(this->owner, owner);
    cout <<"brand  " <<this->brandname <<endl;
    cout <<"price  " <<this->price <<endl;
    cout <<"owner  " <<this->owner <<endl;
    cout <<endl;
}

// copy constructor self written
car (car &temp){
cout << "self written copy constructor called" <<endl;
this->price=temp.price;
this->brandname=temp.brandname;
strcpy(this->owner, temp.owner);
    cout <<"brand  " <<this->brandname <<endl;
    cout <<"price  " <<this->price <<endl;
    cout <<"owner  " <<this->owner <<endl;
    cout <<endl;
}

void print (){
    cout <<"brand  " <<this->brandname <<endl;
    cout <<"price  " <<this->price <<endl;
    cout <<"owner  " <<this->owner <<endl;
    cout <<endl;
}

void setowner(char owner[]){
    strcpy(this->owner, owner);
}

static void inventionyearprint(){
    cout <<inventionyear <<endl;
} 

};
int car::inventionyear=1990;


int main () {
car ford(20000,"fordF","akash");
car *audi=new car(30000,"auidA" ,"ahmad");

//copy constructor
//only copy constructor gets called 
//If self written contructor => DEEP COPY
// If Default contruvtor => SHALLOW COPY  i.e points to same memory addresses.no new memory address is created
car copycar1(*audi);
car copycar2(ford);
car copycar3=ford;

// //?????NO SHALLOW COPY
// copycar2.print();
// ford.brandname="fordF2";
// ford.price=40000;
// char malik[10]="malik";
// // ford.owner=malik;
// ford.setowner(malik);
// ford.print();
// copycar2.print();

// ford.owner[0]='s';
// ford.print();
// copycar2.print();


//copy assignment operator
// car c1(2000000, "akash" , "ahmad" );
// car c2(10000, "br1" , "ow1");
// c1.print();
// c2.print();
// c2=c1;
// c1.print();
// c2.print();



// static data member and static function   ::=scope resolutiion operator
cout << car::inventionyear <<endl;
cout <<ford.inventionyear <<endl;
ford.inventionyear=1991;
cout << car::inventionyear <<endl;
cout <<ford.inventionyear <<endl;
ford.inventionyearprint();
car::inventionyearprint();

}