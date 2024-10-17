// no destructors are called , alresy taken care by java
class Pen { // P is Capital convention
String color; // S is capital in String
int price;

Pen() {
        System.out.println("Self constructor called");
    }
Pen(String s , int a) {
System.out.println("Parametrized constructor called");
this.color=s;
this.price=a;
    }
    // Copy constructor must be self written 
Pen (Pen temp){
    System.out.println("Copy constructor called ");
    this.color=temp.color;
    this.price=temp.price;
}
public void write ( ) {
    System.out.println ( "Pen writes ") ;
}
public void display () {
    System.out.println("Pen is : " + this.color); // use + not ,
    System.out.println("Price of pen is : " + this.price + "\n");
}
}

class Student {
    String name;
    int age ;
    public void display() {
        System.out.println("Name : " +this.name + "\nAge : " + this.age + "\n");
    }
    
}


public class OOPS {
 public static void main (String arg[]) {
  Pen p1 = new Pen();
  p1.color= "blue";
  p1.price=10;
  p1.write();
  p1.display();
   
   Pen p2 = new Pen ("green" , 20) ; // parametrized contructor called
   p2.display();
   
   Pen p3=new Pen (p2);
   p3.display();
   Student s1 = new Student ();
   s1.name="akash" ;
   s1.age=20;
   s1.display();
 }
}