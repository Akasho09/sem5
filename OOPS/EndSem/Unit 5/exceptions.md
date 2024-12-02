# **Exception Handling in Java**

Exception handling in Java provides a way to deal with `runtime errors` to ensure smooth program execution and prevent crashes. It uses a set of keywords and classes to handle errors effectively.

---

## **What is an Exception?**
An exception is an event that disrupts the normal flow of the program during execution. It can be caused by:
- User input errors
- Hardware or resource failures
- Code logic issues

### **Types of Exceptions**
1. **Checked Exceptions**:
   - Checked at compile-time.
   - Must be declared in the `throws` clause or handled with `try-catch`.
   - Examples: `IOException`, `SQLException`.

2. **Unchecked Exceptions**:
   - Occur at runtime and not checked at compile-time.
   - Examples: `ArithmeticException`, `NullPointerException`, `ArrayIndexOutOfBoundsException`.

3. **Errors**:
   - Serious issues that cannot typically be handled by the application.
   - Examples: `OutOfMemoryError`, `StackOverflowError`.

---

## **Exception Hierarchy**
- All exceptions and errors in Java are subclasses of the `Throwable` class.
  - **`Throwable`**
    - **`Exception`**: Can be handled by the program.
      - Checked exceptions (e.g., `IOException`).
      - Unchecked exceptions (e.g., `NullPointerException`).
    - **`Error`**: Severe errors not meant to be handled (e.g., `OutOfMemoryError`).

---

## **Exception Handling Mechanism**

### 1. **`try` Block**
   - Encloses code that may throw an exception.
   ```java
   try {
       int data = 10 / 0; // May throw ArithmeticException
   }
