
// (c) Discuss the criteria for applying the concept of interface and abstract class in 
// the context of Java programming. 
// Take an appropriate programming example to support your criteria.

// Scenario: Designing a Vehicle System
// Abstract classes represent the core shared properties and behaviors (e.g., Vehicle).
// Interfaces define capabilities unrelated to core structure, such as Refuelable.


// Abstract class for shared behavior
abstract class Vehicle {
    protected String brand;
    protected int speed;

    public Vehicle(String brand, int speed) {
        this.brand = brand;
        this.speed = speed;
    }

    public abstract void move(); // Abstract method for movement

    public void displayInfo() {
        System.out.println("Brand: " + brand + ", Speed: " + speed + " km/h");
    }
}

// Interface for unrelated functionality
interface Refuelable {
    void refuel(); // Method to refuel the vehicle
}

// Concrete class implementing abstract class and interface
class Car extends Vehicle implements Refuelable {
    private int fuelLevel;

    public Car(String brand, int speed, int fuelLevel) {
        super(brand, speed);
        this.fuelLevel = fuelLevel;
    }

    @Override
    public void move() {
        System.out.println(brand + " car is moving at " + speed + " km/h.");
    }

    @Override
    public void refuel() {
        System.out.println("Refueling " + brand + " car...");
        fuelLevel = 100;
        System.out.println("Fuel level is now " + fuelLevel + "%.");
    }
}

// Main class to test functionality
public class InterfaceAbstractExample {
    public static void main(String[] args) {
        Car myCar = new Car("Toyota", 120, 50);
        myCar.displayInfo();
        myCar.move();
        myCar.refuel();
    }
}
