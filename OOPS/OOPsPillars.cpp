/* Encapsulation in C++ is defined as the wrapping up of data and information in a single unit.
advantages : 1.Data Protection : Encapsulation protects the internal state of an object by keeping its data members private. 
Access to and modification of these data members is restricted to the class’s public methods, ensuring controlled and secure data manipulation.
 2.information hiding : Encapsulation hides the internal implementation details of a class from external code. Only the public interface of the class is accessible,
  providing abstraction and simplifying the usage of the class while allowing the internal implementation to be modified without impacting external code
*/
#include <iostream>
#include <string>
using namespace std;

class fullyencapsulatedclass {
private :
long int ATM;
int CVV;
int DOE;
public:
fullyencapsulatedclass(long int atm,int cvv,int doe){
    this->ATM=atm;
    this->CVV=cvv;
    this->DOE=doe;
}
};

class humans {
   public:
int height;
int weight;
int age;
static string species;
   private :
int cvv;
   protected:
int aadhar;

public:
void setcvv(int cvv){
this->cvv=cvv;
    }
int getcvv (){
    return this->cvv;
}

void setaadhar(int cvv){
this->aadhar=cvv;
    }
int getaadhar (){
    return this->aadhar;
}
void ambiguity(){
    cout << "ambiguity humans \n";
}
// humans(int height,int weight ,int age){
//     this->age=age;
//     this->weight=weight;
//     this->height=height;
// }

void print (){
    cout <<"height" <<this->age <<endl;
    cout <<"weight" <<this->age <<endl;
    cout <<"age" <<this->age <<endl;
}
};


class millionares {
    public:
bool ismillionare=true;
millionares(){
    cout <<"is millionare \n";
}
void ambiguity(){
    cout << "ambiguity millionare \n";
}
};

//inheritance by public 
/* if inherited publicly=>  public data members of parent will be public in child , private will be NOT ACESSABLE and protecetd will be protected.
if inherited privately => public--private , protected -- private and private --NOT ACESSABLE.
if inherited protected => public--protected , protected -- protected and private --NOT ACESSABLE.
*/
class males : public humans {
public :
char gender;
string job;

void sleep(){
    cout <<"males sleeep for 9 hours on average\n";
}
};

class females : protected humans {

};

class lgbt : private humans {

};

//multilevel inheritance
class employedmales : public males{
    public:
string joblocation;

};

// Multiple Inheritance
class businessmans : public humans , public millionares{

};


string humans::species="homo sapiens";


int main (){
fullyencapsulatedclass atm1(515234572391,123,23122009);

cout <<"\nInheritance publicly \n";
males akash ;
akash.age=20; 
akash.job="student";
akash.sleep();
// akash.cvv(213); //not acessable  private by public
// akash.aadhar(1234); //not acessable proteced by public
akash.setcvv(123);
cout <<akash.getcvv()<<endl;
akash.setaadhar(16483);
cout <<akash.getaadhar()<<endl;
cout <<akash.species;
cout <<males::species;

cout <<"\n\nInheritance protected \n";
females fkash;
// fkash.age=20; 
// fkash.job="student";
// fkash.sleep();
// fkash.cvv(213);
// fkash.aadhar(1234);
// fkash.setcvv(123);
cout <<akash.getcvv()<<endl;
// fkash.setaadhar(16483);
cout <<akash.getaadhar()<<endl;
// cout <<fkash.species;

cout <<"\n\nInheritance private \n";
// lgbt lkash;
// lkash.age=20; 
// lkash.job="student";
// lkash.sleep();
// lkash.cvv(213); //not acessable  private by public
// lkash.aadhar(1234); //not acessable proteced by public
// lkash.setcvv(123);
// cout <<lkash.getcvv()<<endl;
// lkash.setaadhar(16483);
// cout <<lkash.getaadhar()<<endl;
// cout <<lkash.species;


cout <<"\n\n Multilevel Inheritance \n";
employedmales ahmad;
ahmad.joblocation="delhi";
ahmad.job="swe";
ahmad.age=21;


cout <<"\n\n Multiple Inheritance \n";
businessmans b1;
cout <<b1.ismillionare;

cout <<"\n\n Hierarchial Inheritance \n";

cout <<"\n\n Hybrid Inheritance \n";

cout <<"\n\n Ambugity Inheritance \n";
// b1.ambiguity();
b1.humans::ambiguity();
b1.millionares::ambiguity();

 
}