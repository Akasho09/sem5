
abstract class Animal {

   abstract public void speak(); //  abstract method doesnt specify a body
}

class Dogs extends Animal {

    public void speak() {
        System.out.println("Dogs bARK");
    }
}

public class abstraction {
    public static void main (String[] arg) {
        // Animal A1 = new Animal(){}; // is an example of creating an anonymous class that extends the abstract class Animal.
        // A1.speak();
        Dogs D1 = new Dogs();
        D1.speak();
        Animal D2 = new Dogs();
        D2.speak();
        
    }
}
