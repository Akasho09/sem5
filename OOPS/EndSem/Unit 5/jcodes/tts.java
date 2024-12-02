import java.io.*;
import java.util.Scanner;
// Propagate exception or haandle in same fn
public class tts {
   
    static class AgeException extends Exception {
        public String getMessage() {
            return " Qasim bi hai kya " ;
        }
    }
   
    static void ageFun () throws AgeException {
       System.out.println("Enter age : ");
        Scanner s1 = new Scanner (System.in) ;
        int age = s1.nextInt();
        if(age<0) throw new AgeException() ;
        else if (age>18) System.out.println("Noice less years till death ");
        else System.out.println("Saale pagal ha kya ");
    }
    public static void main (String[] arg) {
       while(true){
        try {
            ageFun() ;
           } catch (Exception e) {
            System.out.println(e);
           }
       }
    }
}
