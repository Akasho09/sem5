/*
 * Define a class named Employee with employee_id and employee_ name as its members. Extend this class by creating a subclass called Salary, 
 * which includes designation and monthly salary as additional members.
Implement the following:
(a) Appropriate constructors for initializing the members. *
(b) A method to find and display the details of employees who earn more than Rs. 20,000.
(e) A main method to create an array for storing employee details and demonstrate the funetionality.
 */
 
 class Employee {
    int employee_id;
    String employee_name;

    // Default constructor
    Employee() {}

    // Parameterized constructor
    Employee(int e, String s) {
        this.employee_id = e;
        this.employee_name = s;
        System.out.println("Employee Constructor: ID = " + e + ", Name = " + s);
    }
}

class Salary extends Employee {
    String designation;
    int monthlySalary;

    // Default constructor
    Salary() {}

    // Parameterized constructor
    Salary(int a, String b, int m, String d) {
        super(a, b); // Call the superclass constructor
        this.monthlySalary = m;
        this.designation = d;
        System.out.println("Salary Constructor: ID = " + a + ", Name = " + b + ", Salary = " + m + ", Designation = " + d);
    }

    // Method to display employee details
    void displayDetails() {
        System.out.println("Employee ID: " + employee_id);
        System.out.println("Employee Name: " + employee_name);
        System.out.println("Designation: " + designation);
        System.out.println("Monthly Salary: " + monthlySalary);
    }

    // Method to check if salary is greater than ₹20,000
    boolean earnsMoreThan20000() {
        return monthlySalary > 20000;
    }
}

public class s21 {
    public static void main(String[] args) {
        Salary[] employees = new Salary[3];
        employees[0] = new Salary(1 ,"ahmad" , 20000 , "hr");
        employees[1] = new Salary(2 ,"akash" , 10000 , "bg");
        employees[2] = new Salary(2 ,"akash" , 30000 , "bg");

        System.out.println("\n\nEmployees earning more than ₹20,000:");

        for(Salary e : employees) {
            if(e.earnsMoreThan20000()){
                e.displayDetails();
            }
        }
    }
}
