# A virtual base class
or `Virtual Inheritance`
 - is used to avoid the diamond problem in C++ when dealing with multiple inheritance. The `diamond problem` occurs when a class inherits from two classes that have a `common base` class, causing ambiguity regarding which base class should be used.
- If D doesn't specify how to inherit from A, it ends up with two copies of A—one via B and another via C. This causes ambiguity when accessing members of A through an object of class D.

# Abstract Class in C++
class Shape {
    public :
    virtual void Area () = 0 ;
    virtual void Perimeter () = 0 ;
};
## A virtual function 
is a member function in the base class that can be overridden by a derived class. It allows derived classes to provide their own implementation of the function, while still maintaining the ability to call it via base class pointers or references.

## A pure virtual function 
is a function that is declared in the base class but has no implementation in the base class itself. Instead, it is meant to be overridden by derived classes. A class that contains at least one pure virtual function is called an abstract class, which cannot be instantiated.



