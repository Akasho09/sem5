class Person {
    String name;
    int age;

    Person(String name, int age) {
        this.name = name;
        this.age = age;
    }
}

public class Main {
    public static void main(String[] args) {
        Person p = new Person("Alice", 30);
        
        // Using the toString() method implicitly
        System.out.println(p);  // Automatically calls p.toString()
    }
}
