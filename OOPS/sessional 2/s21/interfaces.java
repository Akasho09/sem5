
interface Animal {
int eyes = 2; // deafult eyes = 2
void eat();
}

interface Pet {
 int Price() ;
}

interface n extends Pet , Animal {
    
}

class Cat implements Animal , Pet {
    int eyes = 3; 
   // Cannot reduce the visibility of the inherited method from AnimalJava(67109273)
   // --> Make Method PUBLIC
   public void eat(){
    System.out.println("Cat eats Meat.");

    }
    public int Price(){
        return 10;
    }
    public void name() {
        System.out.println("Name : ");
    }
}

class Dog implements Animal {

    public void eat() {
        System.out.println("Dog eats stfu");
    }
}



public class interfaces {
    public static void main (String[] arg) {
    Cat c1 = new Cat ();
    System.out.println(c1.eyes);
    c1.eat();
    }
}
