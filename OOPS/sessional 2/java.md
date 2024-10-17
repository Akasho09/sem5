# Access Modifier: 
Defines the access type of the method i.e. from where it can be accessed in your application. In Java, there are 4 types of access specifiers: 
- public: Accessible in all classes in your application.
- protected: Accessible within the package in which it is defined and in its subclass(es) (including subclasses declared outside the package).
- private: Accessible only within the class in which it is defined.
- default (declared/defined without using any modifier): Accessible within the same class and package within which its class is defined.

# class 
A class is a user-defined blueprint or prototype from which objects are created. It represents the set of properties or methods that are common to all objects of one type.

## OOPS in Java
# Polymorphism
It refers to the ability of object-oriented programming languages to differentiate between entities with the same name efficiently. This is done by Java with the help of the signature and declaration of these entities. The ability to appear in many forms is called polymorphism.
Polymorphism in Java is mainly of 2 types: 
1. Overloading => diff signatures . 
2. Overriding  => When base is overridden by derived.
There are two types of polymorphism as listed below:
1. Static or Compile-time Polymorphism : 
Static or Compile-time Polymorphism when the compiler is able to determine the actual function, it’s called compile-time polymorphism. Compile-time polymorphism can be achieved by method overloading in java. When different functions in a class have the same name but different signatures, it’s called method overloading. A method signature contains the name and method arguments. So, overloaded methods have different arguments. The arguments might differ in the numbers or the type of arguments.

2. Dynamic or Run-time Polymorphism :
Dynamic or Run-time Polymorphism Dynamic (or run-time) polymorphism occurs when the compiler is not able to determine at compile-time which method (superclass or subclass) will be called. This decision is made at run-time. Run-time polymorphism is achieved through method overriding, which happens when a method in a subclass has the same name, return type, and parameters as a method in its superclass. When the superclass method is overridden in the subclass, it is called method overriding.

# inheritance 

# Encapsulation
Encapsulation is the process of wrapping code and data together into a single unit.
1. Packages :      2. Acesses Modifiers --- Default(accessible only within the same package.) + ppp
package Java11.bank;
import Java11.bank ;

# abstraction
Abstraction is a process of hiding implementation details and exposing only the functionality to the user. In abstraction, we deal with ideas and not events. This means the user will only know “what it does” rather than “how it does”.
1. Abstract class (0 to 100%)
- The class should be abstract if a class has one or many abstract methods
- An abstract class can have constructors, concrete methods, static method, and final method
- Abstract class can’t be instantiated directly with the new operator. It can be possible as shown in pre tag below:
A b = new B();
2. Interface (100%)
To declare an interface, use the interface keyword. It is used to provide total abstraction. That means all the methods in an interface are declared with an empty body and are public and all fields are public, static, and final by default. A class that implements an interface must implement all the methods declared in the interface. To implement the interface, use the implements keyword.

- Multiple inheritance in java is achieved using interfaces 
interface Animal { void eats (); }
interface Herbivorous { void eats () ;}
class Horse extends Animal , Herbivorous {}