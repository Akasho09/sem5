package myclasses;

interface Laptops {
    int price = 0 ; // Constant value, not a data member
    String brand = "" ;
void Details() ; // abstract method
default void tAndCs () { // default method
System.out.println("No fkin tncs ");
}
static int add(int a, int b) { // static method
    return a + b;
}
// void tAndCs2 () { // concrete methods not allowed
//     System.out.println("No fkin tncs ");
//     }
}

interface laptopRules {
void ruleSet ();
}

interface LegalLaptop extends laptopRules, Laptops {};
class base {

}
class m1Laptops extends base implements LegalLaptop {
    int price ;
    m1Laptops(int p){this.price = p;}
 public void Details() {
        System.out.println("Details : \n");
    }
 public void ruleSet() {
        System.out.println("No fkin Rules in this country ");
 }
}

public class Interfaces {
    public static void main (String[] arg) {
        m1Laptops v1 = new m1Laptops(400000);
        v1.Details();
        v1.tAndCs();
    }
}
