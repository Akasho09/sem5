import java.io.*;

public class checkedUnchecked {

    static class MyException extends Exception {
        public String toString() {
            return "File kidhra hai bey!!" ;
        }
    }
        static void fun1 (){
            try {
                // FileInputStream f1 = new FileInputStream("aksh.txt"); // Checked exception ; must be handled for compilation 
                throw new MyException();
            } catch (Exception e) { 
                System.out.println(e);  
            }
        }
        public static void main (String[] arg) {
            System.out.println("hi");
                fun1() ;
        }
    } 
    




// public class checkedUnchecked {

// static class MyException extends Exception {
//     public String toString() {
//         return "File kidhra hai bey!!" ;
//     }
// }
//     static void fun1 () throws Exception {
//         try {
//             // FileInputStream f1 = new FileInputStream("aksh.txt"); // Checked exception ; must be handled for compilation 
//             throw new MyException();
//         } catch (Exception e) { 
//             System.out.println(e);  
//         }
//     }
//     public static void main (String[] arg) {
//         System.out.println("hi");
//             fun1() ;
//     }
// } 
