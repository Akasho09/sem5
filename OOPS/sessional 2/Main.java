// class Employee {
//     int employee_id ;
//     String employee_name ;

//     // para const 
//     Employee(int e , String s) {
// this.employee_id = e;
// this.employee_name=s ;
// }

//    void Display () {
//     System.out.println(this.employee_id);
//     System.out.println(this.employee_name);
//    }
// }

// class Salary extends Employee {
//     String destination ;
//     int Salary ;
//     static int count =0;
//     static String kdetails[]= new String[10];;
    
//     //para const 
//     Salary(int e , String s , String d , int sl) {
// super( e , s) ;
// this.destination=d;
// this.Salary=sl;
// kdetails[0]="\nEmployee Details with 20k+ Salary : \n";
// if(sl>20000) {
//     count ++;
//     kdetails[count]=(this.employee_name) ;
// }
//     }
//    void Display () {
//     super.Display();
//     System.out.println(this.destination);
//     System.out.println(this.Salary + "\n");
//    }
 
//   static void greater20k () {
//     for(int i=0;i<kdetails.length ;i++) {
//         System.out.println(kdetails[i]); 
//    }
// }
// }

// public class s21 {
//     public static void main (String arg[]) {

//         Salary [] Employeedetails = {
//             new Salary(1, "akash", "jamia", 1000),
//             new Salary(3, "malik", "wa", 30000),
//             new Salary(4 ,"aku" , "wp" , 40000)
//         };

//         Salary.greater20k();
//     }
// }



class Employee {
    int employee_id;
    String employee_name;

    // Constructor
    public Employee(int employee_id, String employee_name) {
        this.employee_id = employee_id;
        this.employee_name = employee_name;
    }

    // Display details
    public void display() {
        System.out.println("ID: " + employee_id + ", Name: " + employee_name);
    }
}

class Salary extends Employee {
    String designation;
    double monthly_salary;

    // Constructor
    public Salary(int employee_id, String employee_name, String designation, double monthly_salary) {
        super(employee_id, employee_name);
        this.designation = designation;
        this.monthly_salary = monthly_salary;
    }

    // Display only if monthly salary > 20000
    @Override
    public void display() {
        if (monthly_salary > 20000) {
            super.display();
            System.out.println("Designation: " + designation + ", Monthly Salary: " + monthly_salary);
        }
    }
}

public class Main {
    public static void main(String[] args) {
        // Array of Employee objects
        Salary[] employees = {
            new Salary(1, "Alice", "Manager", 30000),
            new Salary(2, "Bob", "Developer", 18000),
            new Salary(3, "Carol", "Analyst", 25000)
        };

        // Display employees earning more than Rs. 20,000
        for (Salary employee : employees) {
            employee.display();
        }
    }
}

