/*
Write a program in C++ for the bookshop using appropriate member function and constructors for the following scenario:

A bookshop keeps track of the books that are available for purchase. 
The list includes information such as the author's name, title, cost, publication, and stock position. 
When a customer requests a book, the salesperson enters the title and author, and the system scans the 
list to see if it is available. If it is not, a suitable notice is displayed. If it is, the system displays the
 book information and requests the number of copies needed. If the requested copies are in stock, the total cost is displayed; 
 otherwise, the message "Sorry! These many copies are not in stock" is displayed.
*/
#include <iostream>
using namespace std;

class BookShop { 
    string author ;
    string title ;
    int cost ;
    string publication ;
    int stock ;
    public : 
    static vector<BookShop> track ;

BookShop ( string author ,
    string title ,
    int cost ,
    string publication ,
    int stock ) {
        this->author=author;
        this->title=title;
        this->cost=cost;
        this->publication=publication;
        this->stock=stock; 
        track.push_back(*this);
}

string getAuthor () { return this->author;}
string getTitle () { return this->title ; }
int getStock () {return this->stock;}
void setStock (int c) { this->stock=this->stock-c;}

void display () {
        cout <<this->author  <<endl;
        cout <<this->title <<endl;
        cout <<this->cost <<endl;
        cout <<this->publication  <<endl;
        cout <<this->stock <<endl <<endl;
}

};
vector<BookShop> BookShop::track ;  // define outside static variables 

int main () {

BookShop book1 ("akash" , "Me And You" ,  200 , "A publichers" , 10);
BookShop book2 ("ahmad" , "You And You" ,  300 , "B publichers" , 30);
BookShop book3 ("malik" , "Me And Me" ,  400 , "C publichers" , 20);

vector<BookShop> track1=BookShop::track;

cout <<"--------Availibilities --------\n" ;
for(int i=0;i<track1.size();i++) {
    track1[i].display() ;
    cout <<"-----------------\n\n";
}

while(1){
    string t;
    string a;
    cout << "Enter the title of the book: ";
    getline(cin, t);
    cout << "Enter the author of the book: ";
    getline(cin, a);
    int i;
    for( i=0;i<track1.size();i++) {
        if(track1[i].getTitle()==t && track1[i].getAuthor()==a ){
       break;
        }}
    if(i==track1.size()) {
        cout <<"Book not found\n";
        continue;
    }
    else {
        int c ;
        cout <<"Enter number of book\n";
        cin>>c;
        if(track1[i].getStock()>=c) {
            track1[i].setStock(c);
            BookShop::track[i].setStock(c);
            cout << "Purchase Completed\n";
        }
        else {
            cout <<"Insuffiient stock\n" ;
continue ;
        }
    }
}

}