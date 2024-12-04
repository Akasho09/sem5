#include <iostream>
#include <cstring>
using namespace std;

class Student {
    char* name;
    int roll_no;
    int branch;

public:
    // Constructor
    Student(string s, int r, int b) {
        name = new char[s.length() + 1];  // Allocate memory for the name
        strcpy(name, s.c_str()); 
        roll_no = r;
        branch = b;
    }

    // Destructor
    ~Student() {
        delete[] name;
    }

    // Overloading new operator
    void* operator new(size_t size) {
        cout << "Custom new operator called.\n";
        void* p = malloc(size); // Allocate memory
        if (!p) {
            throw bad_alloc();
        }
        return p;
    }

    // Overloading delete operator
    void operator delete(void* p) {
        cout << "Custom delete operator called.\n";
        free(p); // Deallocate memory
    }

    // Display function
    void display() {
        cout << "Name: " << name << ", Roll No: " << roll_no << ", Branch: " << branch << endl;
    }
};

int main() {
    Student* s = new Student("John Doe", 101, 5); // Dynamic memory allocation using overloaded new
    s->display();
    delete s; // Deallocate memory using overloaded delete
    return 0;
}
