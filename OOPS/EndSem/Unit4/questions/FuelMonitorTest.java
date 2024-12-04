class FuelMonitor {
    // Instance variables
    private double tankCapacity; // Tank's capacity in liters
    private double efficiency;   // Efficiency in kilometers per liter
    private double fuelInTank;   // Current fuel in the tank

    // Constructor to initialize tank capacity and efficiency
    public FuelMonitor(double tankCapacity, double efficiency) {
        this.tankCapacity = tankCapacity;
        this.efficiency = efficiency;
        this.fuelInTank = 0; // Initial fuel is set to 0
    }

    // Method to get the initial tank size and current fuel level
    public void displayTankDetails() {
        System.out.println("Tank Capacity: " + tankCapacity + " liters");
        System.out.println("Fuel in Tank: " + fuelInTank + " liters");
    }

    // Method to add fuel to the tank
    public void addFuel(double fuel) {
        if (fuel <= 0) {
            System.out.println("Invalid fuel amount. Please enter a positive value.");
        } else if (fuelInTank + fuel > tankCapacity) {
            System.out.println("Cannot add that much fuel. Tank will overflow.");
            fuelInTank = tankCapacity; // Fill the tank to capacity
        } else {
            fuelInTank += fuel;
            System.out.println("Added " + fuel + " liters of fuel. Current fuel: " + fuelInTank + " liters");
        }
    }

    // Method to calculate the distance that can be traveled with the current fuel
    public double driveDistance(double distance) {
        double maxDistance = fuelInTank * efficiency;
        if (distance <= maxDistance) {
            fuelInTank -= distance / efficiency; // Deduct fuel used
            System.out.println("Drove " + distance + " km. Remaining fuel: " + fuelInTank + " liters");
            return distance;
        } else {
            System.out.println("Not enough fuel to drive " + distance + " km. Maximum distance possible: " + maxDistance + " km");
            double actualDistance = maxDistance;
            fuelInTank = 0; // Tank is empty after driving maximum possible distance
            return actualDistance;
        }
    }
}

// Test program
public class FuelMonitorTest {
    public static void main(String[] args) {
        // Create a FuelMonitor object with a 50-liter tank and efficiency of 15 km/l
        FuelMonitor car = new FuelMonitor(50, 15);

        // Display initial details
        car.displayTankDetails();

        // Add fuel to the tank
        car.addFuel(20);
        car.addFuel(35); // This will exceed the tank's capacity

        // Try to drive various distances
        car.driveDistance(200); // Drive 200 km
        car.driveDistance(1000); // Attempt to drive 1000 km
    }
}
