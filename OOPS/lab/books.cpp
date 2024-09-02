// Bookstore Inventory System: 
// ---------------------------------------------------
// Define a class to represent a book in a bookstore.
// -Data members:
// -Title of the book
// -Author
// -ISBN number
// -Price
// Member functions:
// -To assign initial values
// -To update the price of the book
// -To apply a discount to the book
// -To display the book’s details


// (i)  Implement the program to Handle a Single Book
// (ii) Extend the program to handle 3 Books
// (iii)Extend the program to implement Array of Objects(10 Books)
// (iv) Make the program run until user want to exit.


#include <iostream>
#include <string>
using namespace std;

class books {
string Title_of_the_book;
string Author;
int ISBN_number;
int Price;

public:
books () {
    cout << "Enter initial details \n";
    cout << "ENTER TITLE OF THE BOOK \n";
    cin >>this->Title_of_the_book;
    cout << "ENTER AUTHOR OF THE BOOK \n";
    cin >> this->Author;
        cout << "ENTER ISBN NUMBER OF THE BOOK \n";
    cin >> this->ISBN_number;
        cout << "ENTER PRICE OF THE BOOK \n";
    cin >> this->Price;
}

void updateprice(int price){
    this->Price=price;
}

void applydiscount(int d){
this->Price= d/100 * this->Price;
cout << "Discounted price " <<this->Price <<endl;
}

};

int main ()  {
books b;


}