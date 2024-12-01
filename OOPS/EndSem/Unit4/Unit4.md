## Classes, objects, and constructors in Java.
- ClassName obj = new ClassName();
- By default , public members and methods.
- If no constructor is defined, Java provides a default constructor that initializes fields to their default values (e.g., 0 for integers, null for objects).

## Inheritance in Java
Inheritance allows a class (child/derived class) to inherit properties and methods from another class (parent/base class).
- Use the extends keyword to establish inheritance.
- how not to to override method in java ==> use final in base .


## acesses modifiers in java
Modifier	Class	Package	Subclass	World
Private	      ✅	     ❌	     ❌	     ❌
Default	      ✅	     ✅	     ❌	     ❌
Protected	  ✅	     ✅	     ✅	     ❌
Public	      ✅	     ✅	     ✅       ✅

## Polymorphism
1. Compile-time Polymorphism a/c static polymorphism.
- achieved by Method overloading.
- When there are multiple functions with the same name but `different parameters` (changes in the number of arguments or/and a change in the type of arguments)then these functions are said to be overloaded. 

2. Runtime Polymorphism a/c dynamic polymorphism or dynamic memory dispatch.
- achieved by Method Overriding.
a).  Dynamic Binding
Dynamic binding (or late binding) refers to the process of resolving the method to be executed at runtime rather than at compile-time.
The method that gets executed depends on the actual object (not the reference type) at runtime.
Java uses dynamic binding for overridden methods.
    @Override

## What is an Abstract Class?
An abstract class is a class that cannot be instantiated directly.
- It serves as a blueprint for other classes.
It can contain:
- Abstract methods: Methods without a body, to be implemented by subclasses.
- Concrete methods: Regular methods with implementations.

IN JAVA 
- its created by using abstract keyword wrt c++.
- Subclasses must override and provide an implementation for all abstract methods of the superclass, unless they are also declared as abstract.

## Interfaces 
An interface in Java is a reference type that specifies a set of methods that a class must implement. Unlike classes, an interface provides a contract for what a class can do, without specifying how it does it. They are used to achieve `abstraction` and `multiple inheritance` in Java.

Multiple inheritance 
- class Truck implements Drivable, Maintainable { }

## Key Differences Between Interfaces and Abstract Classes

| **Feature**         | **Interface**                                                                                 | **Abstract Class**                                                                                     |
|----------------------|-----------------------------------------------------------------------------------------------|--------------------------------------------------------------------------------------------------------|
| **Inheritance**      | - A class can implement **multiple interfaces**, enabling multiple inheritance.               | - A class can **extend only one abstract class** (Java supports single inheritance for classes).       |
| **Methods**          | - Methods in an interface can be:                                                            | - Methods in an abstract class can be:                                                                |
|                      |   - **Abstract** (no body, must be implemented by the class).                                 |   - **Abstract** (no body, must be implemented by the subclass).                                      |
|                      |   - **Default** (introduced in Java 8, has a body and can provide a default implementation). |   - **Concrete** (has a body and can provide reusable functionality for subclasses).                  |
|                      |   - **Static** (can have a body and belong to the interface itself).                         |    - **Static** (can have a body and belong to the interface itself)|
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

- class m1Laptops extends base implements LegalLaptop {}

