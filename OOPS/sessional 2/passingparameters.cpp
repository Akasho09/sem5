//         Book(const string &title, int id, const string &author) : 
//         LibraryItem(title, id) {
//         this->author=author; }

#include <iostream>
#include <string>
using namespace std;

// Base class
class LibraryItem {
protected:
    string title;
    int id;

public:
    // Base class constructor
    LibraryItem(const string &title, int id) {
  this->id=id;
  this->title = title;
  cout << "LibraryItem Constructor: " << title << " (ID: " << id << ")" << endl;
    } 
    
    void display() {
        cout << this->id <<endl <<this->title <<endl;
    }

};

// Derived class for Book
class Book : public LibraryItem {
private:
    string author;

public:
    // Derived class constructor
    Book(const string &title, int id, const string &author) : LibraryItem(title, id) {
        this->author=author;
        cout << "Book Constructor: " << title << " by " << author << endl;
    }
    void display() {
    LibraryItem :: display() ; // calling base fn from derived
    cout << this->author <<endl <<endl;
    }


};

// Derived class for Magazine
class Magazine : public LibraryItem {
private:
    int issue;

public:
    // Derived class constructor
    Magazine(const string &title, int id, int issue) : LibraryItem(title, id), issue(issue) {
        cout << "Magazine Constructor: " << title << " (Issue: " << issue << ")" << endl;
    }
};

// Derived class for Newspaper
class Newspaper : public LibraryItem {
private:
    string date;

public:
    // Derived class constructor
    Newspaper(const string &title, int id, const string &date) : LibraryItem(title, id), date(date) {
        cout << "Newspaper Constructor: " << title << " (Date: " << date << ")" << endl;
    }
};

int main() {
    Book book("The Great Gatsby", 1, "F. Scott Fitzgerald");
    book.display();
    Magazine magazine("National Geographic", 2, 2023);
    Newspaper newspaper("The New York Times", 3, "2024-10-17");

    return 0;
}

