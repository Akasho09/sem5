#include <iostream>
#include "collegeclass.cpp"
using namespace std;

//creating a class
class car{

public: // by default data members are private
int price;
string brandname;
void profit(){
    cout <<(price-makingprice)*100 /makingprice <<"%" <<endl;
}
void printaddressofthispointer (){
    // cout <<*this<<endl;  //??????
    cout <<"address of this pointer of said object is " <<this <<endl;
}

//getters and setters 
int getmp(){
    return makingprice;
}
void setmp(int newmp, string pass){
    if (pass==(brandname+"@123")) //password
    makingprice=newmp;
}

car(){
    cout <<"---constructor name.car() called on creating a object ---" <<endl;
}

//destructor-->gets called automatically when statically allocated object
~car(){
cout <<"----destructor called----" <<endl <<endl;
}

private:
int makingprice=2000;
};


class emptyclass {
//size=1
};

int main () {
car tesla; //creating a object statically
    cout << "size of class car : " <<sizeof(car) <<endl;
    cout << "size of emptyclass is : " <<sizeof(emptyclass) <<endl;
    cout <<"size of object tesla of class car :"  <<sizeof(tesla)<<endl;
tesla.price =10000;
tesla.brandname= "teslaX";
tesla.profit();
   cout <<"initial making price  " <<tesla.getmp() <<endl;
tesla.setmp(4000,"teslaX@123");
    cout <<"new making price  " <<tesla.getmp() <<endl;
tesla.profit();
tesla.setmp(5000,"akashmalik");
    cout <<"new making price  " <<tesla.getmp() <<endl;
    tesla.printaddressofthispointer(); 
    cout <<"address of tesla  " <<&tesla <<"   i.e  &tesla == this " <<endl;


college jmi;
jmi.rank=26;
cout <<endl <<endl;

car *alto=new car; //creating object dynamically -- car *alto=new car();
    cout << "size of address of alto car : " <<sizeof(alto) <<endl;
    cout << "size of alto car : " <<sizeof(*alto) <<endl;
alto->price=1000;
(*alto).brandname="altobrandA";
alto->setmp(1000,"altobrandA@123");
    cout << "size of alto car : " <<(&alto) <<endl;

delete alto; //manually calling destructor for object alto
return 0;
}