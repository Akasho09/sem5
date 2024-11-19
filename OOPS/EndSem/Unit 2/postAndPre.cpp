#include <iostream>
using namespace std;

class newChar {
char c ;
public :
newChar(char s){
    c=s;
}
void display () {
    cout <<c <<endl;
}
char operator++ () {
this->c=this->c+1;
return c ;
}

char operator++(int){
char temp = c;
this->c=this->c+1;
return temp ;
}
};

int main () {
newChar b('a');
b.display();
cout <<"PostIncrement : " <<b++ <<endl;
b.display();
cout <<"PreInc : " <<++b <<endl;
b.display();

cout <<endl <<endl ;
int i=1;
char a = 'a';
cout <<++i; //2 
cout <<i++ <<endl; //2 
cout <<++a; 
cout <<a++; 
}