import java.util.Scanner;

class Myexception extends Exception {
  public Myexception (String m) { // default constructor 
    super(m) ;
  }      
}

public class tandt2 {
    public static void main  (String[] arg ) {
        Scanner s1 = new Scanner(System.in);
        System.out.println("Enter Age : ");
        try {
            int age = s1.nextInt();
            if(age<18) {
                throw new Myexception("Age is <18");
            }
            else {
                System.out.println("stfu");
            }
        } catch (Exception e){
            System.out.println(e);
        }

    }

}


