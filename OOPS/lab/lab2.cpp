#include <iostream>
using namespace std;
  
  class employee {
  string name ;
  int number;
  public :
  employee () {
    cout << "Default Constructor employee\n" ;
  }
  employee (string name , int num) {
this ->name =name;
this->number=num;
}
    void getdata () {
cout << "Name  :  " <<name <<endl;
cout << "Number : " <<number <<endl;
  }

void putdata (string n , int num)  {
this->name= n;
this->number=num;
}
 ~employee () {
 cout << "-----Deconstructor called employee------\n" ;
 }
  } ;
  

  
  // Manager  ----
  class manager:public employee {
  string title;
  int club_dues;
  public :
  manager () {
  cout << "Default Constructor manager\n";
  
  }
    manager (string s, int i ) {
title =s;
club_dues=i;
  }
  
  void getdata () {
 employee :: getdata() ;
  cout << "Title  : " <<title  <<endl ;
  cout << "Club_Dues : " <<club_dues <<endl <<endl ;
  }
  
  
void putdata (string n , string title , int d , int num ) {
employee :: putdata (n , num ) ;
this->title= title ;
this->club_dues=d ;
}

 ~manager() {
 cout << "-----Deconstructor called manager-------\n";
 
 }

  };
  
    class scientist:  public employee {
  string publications;
  public :
  scientist () {
  cout << "Default Constructor scientist\n" ;
  }
    scientist (string s) {
    this->publications =s;
}

  void getdata () {
  employee :: getdata ( ) ;
  cout <<  "publications : " <<publications <<endl ;
cout <<endl;
}

void putdata (string name , string p , int num ) {
employee :: putdata (name , num ) ;
this->publications= p ;
}

 ~scientist () {
 cout << "-----Deconstructor called scientist------\n" ;
 }
 
  };
  
      class labourer : public employee {
  public :
  labourer () {
  cout << "Default Constructor labourer\n " ;
  
  }
  void getdata () {
  employee :: getdata () ;
  cout <<endl;
}
void putdata (string name , int num ) {
  employee :: putdata (name , num ); 
}

 ~labourer() {
 cout << "-----Deconstructor called labourer-----\n";
 
 }
 
  };
  
  
  
  
int main () {
cout <<  "Hiii \n\n" ;

manager m1; // calls both employees default and managers
m1.putdata("Akash " , " Manager 1 "  , 3000 , 910359 ) ;
m1.getdata() ;

scientist s1 ;
s1.putdata ("Ahmad " ,  " Publication1 " , 9283) ;
s1.getdata() ;

labourer l1 ;
l1.putdata("malik " , 8373 ) ;
l1.getdata () ;




}