// Polymorphism
// Polymorphism means "many forms", and it occurs when we have many 
// classes that are related to each other by inheritance.
#include <iostream>
using namespace std;

// Function overload and function overriding
class Animal {
  public:
    void animalSound() {
      cout << "The animal makes a sound \n";
    }

    //same named function but diff return type 
    //  void animalSound() {
    //   cout << "animals makes sound \n";
    // }

    //same named function but diff signature type
    void animalSound(string animal) {
      cout << "The " <<animal   << " makes a sound \n";
    }
};

// Derived class
class Pig : public Animal {
  public:
    void animalSound() {
      cout << "The pig says: wee wee \n";
    }
};

// Derived class
class Dog : public Animal {
  public:
    void animalSound() {
      cout << "The dog says: bow wow \n";
    }
};

class nums {
public:
int a;
int b;

int add (){
    return a+b;
}

//operator overload
void operator+ (nums n2){
int v1=this->a;
int v2=n2.a;
cout << "output is " <<v2-v1 <<endl;
}
void operator() (){
cout <<"i am bracket " <<this->a <<endl;
}
// void operator-- (){
//  cout<<this->a-1 <<endl;
// }
};

//abstraction = implementation hiding

int main() {
  Animal myAnimal;
  Pig myPig;
  Dog myDog;

  myAnimal.animalSound();
  myPig.animalSound();
  myDog.animalSound();

nums n1;
n1.a=12;
n1.b=15;
cout <<n1.add()<<endl;
cout <<n1.a+n1.b<<endl;
nums n2;
n2.a=16;
n1+n2;
n1() ;
// n1--;

  return 0;
}