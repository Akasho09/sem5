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

## Friend Function
is a non-member function that has been granted access to the private and protected members of a class. This allows the function to directly access the class's internal data, even though it's not a part of the class itself.

## Friend Class 
A friend class grants another class access to its private and protected members. This is useful when two classes are tightly related and need to share internal details.

## static data member 
A static data member is shared across all instances of a class. It is not unique to each object.
- Static members are allocated memory only once, at the class level, not at the object level.
- int classname :: count = 0;

## Static member function
Access to Static Members Only:
Static member functions can access only static data members or other static member functions.
- They cannot access non-static members directly.
-     static int getCircleCount() {
        return count;
    }

## Dynamic Initialization Through Constructors
Dynamic initialization of object refers to initializing the objects at a run time i.e., the initial value of an object is provided during run time.


## pointer to an object 
is a pointer variable that stores the memory address of an object. Pointers to objects are particularly useful in scenarios where objects need to be dynamically allocated or passed around efficiently in a program.

## Array of Objects
