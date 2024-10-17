abstract class animal {
    abstract void walk ();
    public void eat () {
     System.err.println("Animal Eats"); // non abstract method in abstract class
    }
 }
 // we cant create a animal , its abstract 
 class horse extends animal {
   public void walk () {
         System.out.println("Horse walks on 4 legs ");
     }
 }
 public class Abstraction {
 public static void main(String arg[]) {
 horse h1 = new horse () ;
 h1.walk();
 h1.eat();
     }
 
 }