##
- javac -d . ex1.java : 
compiles ex1 classs into a new folder named package name at . (same folder location)





# **Java Packages**

Java packages are a mechanism for organizing classes, interfaces, and sub-packages in a structured manner. They act as containers and help prevent naming conflicts, manage access protection, and make code easier to locate and use.

---

## **Key Concepts of Java Packages**

### 1. **What is a Package?**
- A package is a namespace that organizes a set of related classes and interfaces.
- It provides access protection and avoids naming conflicts.

### 2. **Types of Packages**
Java provides two types of packages:

#### a) **Built-in Packages**
- Predefined packages provided by Java.
- Examples:
  - `java.util`: Contains utility classes like `ArrayList`, `HashMap`, etc.
  - `java.io`: Contains classes for input and output operations.
  - `java.lang`: Provides core classes such as `String`, `Math`, and `System`.

#### b) **User-defined Packages**
- Created by users to organize their own classes and interfaces.
- Custom packages improve project modularity and maintainability.

---

## **Advantages of Using Packages**
1. **Namespace Management**  
   - Helps avoid class name conflicts.
   - For example, two classes with the same name can exist in different packages.

2. **Access Control**  
   - Packages enable encapsulation by providing `protected` and default access levels.

3. **Code Reusability**  
   - Organized code can be reused across different projects.

4. **Easy Maintenance**  
   - Logical grouping of related classes and interfaces simplifies project maintenance.

---

## **Creating a Package**
1. **Define the Package**  
   Use the `package` keyword at the beginning of the file.  
   Syntax:  
   ```java
   package packageName;
