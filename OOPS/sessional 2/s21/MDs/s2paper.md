Q1(b): Explain keywords in public static void main(String[] args)

- public: An access modifier allowing the method to be called from outside the class by the Java runtime.
- static: Allows the method to be called without creating an instance of the class. The JVM calls this method directly.
- void: Indicates that the method does not return any value.
- main: The entry point of any Java application; the JVM looks for this method to start execution.
- String[] args: An array of String arguments passed from the command line. args can contain inputs specified by the user.

Q1(c): Difference between "Platform Independent" and "Architecture-neutral" in Java

- Platform Independent: Java code is compiled into bytecode by the Java compiler. This bytecode can be executed on any platform that has a Java Virtual Machine (JVM), making Java applications platform-independent.
- Architecture-neutral: Java bytecode is designed to be executed on any processor, with the JVM providing the necessary translation. This feature allows Java programs to be run on various architectures without modification.


## Classes, objects, and constructors in Java
- ClassName objectName = new ClassName();
eg : Base b1 = new Base () ;
     `ClassName[]` arrayName = new ClassName[arraySize]; --> Array of objects 

- Deafult constructor 
 ClassName() {
        // Initialization code
 }
- Parametrized contructor 
Car(String b, int s) {
        brand = b;
        speed = s;
    }

# Implementing inheritance and polymorphism: dynamic binding, method overriding
## Inheritance:
- Allows a class (subclass/derived class) to inherit properties and behaviors (methods) from another class (superclass/base class).
- Promotes code reuse by enabling subclasses to inherit and extend the functionality of existing classes. 
 ` base  @Override ` 
-  Animal myDog = new Dog(); 
   BaseClass cname = new Derived() ;
   BaseClass[] cname = {
  new Derived1(),
  new Derived2()
   };`Semicolon`
    or One by One 
- 

## Polymorphism:
Refers to the ability of different objects to be treated as instances of the same class through a shared interface.
It enables methods to behave differently based on the object that is invoking them.
1. Compile-time Polymorphism (`Static Binding`):
This occurs when the method to be invoked is determined at compile time. It is achieved through method overloading (same method name, different parameters).
eg :
public void print(int i) {
        System.out.println("Printing integer: " + i);
    }

public void print(String s) {
        System.out.println("Printing string: " + s);
    }
printer.print(10);        // Calls print(int)
printer.print("Hello");   // Calls print(String)

2. Run-time Polymorphism (`Dynamic Binding`):
This occurs when the method to be invoked is determined at runtime based on the actual object type, not the reference type. This is achieved through `method overriding` (subclass providing a specific implementation of a method already defined in the superclass).
- same fn name and parameters in base and derived , base overrides derived.

## Abstraction
An abstract class is a class that cannot be instantiated on its own but is meant to be subclassed. 
It can contain both abstract methods (methods without implementation) and concrete methods (methods with implementation).

# Interfaces 
in Java are a powerful feature that allows you to define a contract for a class without providing the actual implementation. They are used to achieve `abstraction` and `multiple inheritance` in Java.

Multiple inheritance 
- class Truck implements Drivable, Maintainable { }

## Key Differences Between Interfaces and Abstract Classes

| **Feature**         | **Interface**                                                                                 | **Abstract Class**                                                                                     |
|----------------------|-----------------------------------------------------------------------------------------------|--------------------------------------------------------------------------------------------------------|
| **Inheritance**      | - A class can implement **multiple interfaces**, enabling multiple inheritance.               | - A class can **extend only one abstract class** (Java supports single inheritance for classes).       |
| **Methods**          | - Methods in an interface can be:                                                            | - Methods in an abstract class can be:                                                                |
|                      |   - **Abstract** (no body, must be implemented by the class).                                 |   - **Abstract** (no body, must be implemented by the subclass).                                      |
|                      |   - **Default** (introduced in Java 8, has a body and can provide a default implementation). |   - **Concrete** (has a body and can provide reusable functionality for subclasses).                  |
|                      |   - **Static** (can have a body and belong to the interface itself).                         |                                                                                                        |
| **Fields**           | - Fields are implicitly `public static final` (constants).                                    | - Fields can have any access modifier (`private`, `protected`, or `public`).                          |
| **Constructors**     | - Interfaces **cannot have constructors** because they cannot be instantiated.                | - Abstract classes **can have constructors** to initialize common fields or perform setup tasks.       |
| **Use Case**         | - Used to define **behavior** that can be shared by unrelated classes.                        | - Used to define **common behavior** among related classes in a class hierarchy.                      |
| **Multiple Inheritance** | - Supports **multiple inheritance** via implementation of multiple interfaces.              | - Does **not support multiple inheritance** directly, but can be combined with interfaces.             |
| **Speed**            | - Slightly slower because it requires extra indirection (methods are resolved dynamically).   | - Slightly faster as it uses direct inheritance (methods are resolved statically).                     |

## Extending interfaces
interface Animal {
    void eat();
}

interface Pet {
    void play();
}

interface Dog extends Animal, Pet {
    void bark();
}


# Keywords:
1. `extends`
Purpose: Used for inheritance between classes or extending another abstract class.
Relationship: Establishes an `is-a` relationship.
Rules:
A class can only extend one class (`single` inheritance).
A class inheriting another class gains all the accessible fields and methods of the superclass, except constructors.
Abstract classes can be extended by another abstract class or a concrete class.

2. `implements`:
Purpose: Used to implement an interface.
Relationship: Establishes a "`contract`" that the implementing class must fulfill.
Rules:
A class can implement multiple interfaces (achieving multiple inheritance behavior).
The implementing class must provide concrete implementations for all abstract methods defined in the interface.
A class can implement interfaces and extend a class simultaneously.

