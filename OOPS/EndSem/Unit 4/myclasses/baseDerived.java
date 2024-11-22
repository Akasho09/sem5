package myclasses;

class base { // make class public to be acessed if package is imported 
    int a;
base (int b) { this.a=b; } // this.
public void display() { // make fn public to be acessed if package is imported 
    System.out.println("Base element is : " + a);
}
}

class Derived extends base {
Derived(int b){super(b);}
 public void display() {
        System.out.println("Derived element is : " + a);
    } 
}

public class baseDerived {
   public static void main (String[] arg) {
    base b1 = new base (10);
    Derived d1 = new Derived(20);
    base d2 = new Derived(30);
    b1.display();
    d1.display();
    d2.display();
   }
}