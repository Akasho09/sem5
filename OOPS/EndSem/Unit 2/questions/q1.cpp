/*
Declare and define a class Set representing a set of integers.
The class should have the following:

Private members:
A pointer to a dynamically allocated array of integers.
An integer that holds the size of the set.
The following methods:
A constructor to create an empty set.
A function to add an element to the set (overload the += operator).
A function to remove an element from the set (overload the -= operator).
A binary friend function to get the union of two sets (overload the + operator).
A binary friend function to get the intersection of two sets (overload the * operator).
A function to print the contents of the set.
*/

// IMPS
//  destructor 
// cant add if already exists and delte also
//     Set s2; not Set s2();

#include <iostream>
using namespace std ;

class Set {
    int *Elements ;
    int size ;

public :
    // Constructor to create an empty set
Set() {
    size=0;
    Elements = new int[0] ;
}
   // Destructor to free allocated memory
~Set() {
        delete[] Elements;
    }

void inputElemets() {
    if(size==0) { return ; }
    for(int i=0;i<size;i++) {
       cin >> Elements[i];
    }
}
void display () {
        for(int i=0;i<size;i++) {
            cout << Elements[i]<<" ";
}
cout <<endl;
}
void operator+= (int a) {
    for(int i=0;i<size;i++) { // check if alreday exists
        if(Elements[i]==a) {
            cout<< "Element already exists \n";
            return ;
        }
    } 
    int * newElements = new int[size+1];
    for(int i=0;i<size;i++) { //copy previous
        newElements[i]=Elements[i] ;
    }
    newElements[size] = a; //add new 
    delete[] Elements ;
    this->Elements=newElements;
    size=size+1;
    }

void operator-=(int a){
    int i;
    for( i=0;i<size;i++) {
        if(Elements[i]==a){ break ;}
    }
    if(i==size) {
        cout<<"Element doesnt exist \n" ;
        return ;
    }
    int * newElements = new int [size-1];
    for(int j=0;j<size;j++) {
        if(j!=i) newElements[j]= Elements[j] ;
        else { //if ele found handle differently
        newElements[j]= Elements[j+1];
        size--;
        }
    }
    delete[] Elements ;
    Elements= newElements;
}

friend Set operator+ (Set s1 , Set s2); 
friend void operator* (Set s1 , Set s2); 

};

Set operator+ (Set s1 , Set s2 ) {
    Set result ;
    for(int i=0;i<s1.size;i++){ 
        result+=s1.Elements[i];
    }
     for(int i=0;i<s2.size;i++){ //handles repeatind alreday
        result+=s2.Elements[i];
    }
    return result;
}

int main () {
    Set s1;
    s1+=2;
    s1+=3;
    s1+=1;


    Set s2;
    s2+=1;
    s2+=10;
    s1.display();
    s2.display();

    Set s3 = s1+s2;
    s3.display();
    // *s1.display();
    // // s1.addElement(4);
    // s1+=4;
    // s1.display();

    // // s1.removeElement();
    // s1.display();

}