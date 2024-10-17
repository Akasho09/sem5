// Abstract class  => cant be created 
abstract class Animal {
    String name;

    // Constructor
    public Animal(String name) {
        this.name = name;
    }

    // Abstract method (no body)
    public abstract void sound();

    // Concrete method (has body)
    public void showName() {
        System.out.println("Animal's name: " + name);
    }
}

// Subclass 1: Dog
class Dog extends Animal {
    public Dog(String name) {
        super(name);  // Call to the parent class (Animal) constructor
    }

    // Implementation of the abstract method
    @Override
    public void sound() {
        System.out.println(name + " barks: Woof! Woof!");
    }
}

// Subclass 2: Cat
class Cat extends Animal {
    public Cat(String name) {
        super(name);  // Call to the parent class (Animal) constructor
    }

    // Implementation of the abstract method
    @Override
    public void sound() {
        System.out.println(name + " meows: Meow! Meow!");
    }
}

public class AbstractExample {
    public static void main(String[] args) {
        // Creating objects of the subclasses
        Animal dog = new Dog("Buddy");
        Animal cat = new Cat("Whiskers");
        Cat cat2 = new Cat ( "MyCatty") ;
        // Calling methods
        dog.showName();  // Calls the concrete method from the abstract class
        dog.sound();     // Calls the overridden sound() method in Dog

        cat.showName();  // Calls the concrete method from the abstract class
        cat.sound();     // Calls the overridden sound() method in Cat

        cat2.showName();
        cat2.sound();

         Animal animal2 ;
         animal2 = cat2 ;
         animal2.showName();
         animal2.sound();

         animal2=dog;
         animal2.showName();
         animal2.sound();
    }
}
