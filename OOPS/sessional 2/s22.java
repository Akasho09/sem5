class Customer {
    public double getDiscount() {
        return 0.0; // Default discount
    }
}

class RegularCustomer extends Customer {
    @Override
    public double getDiscount() {
        return 10.0; // 10% discount
    }
}

class PremiumCustomer extends Customer {
    @Override
    public double getDiscount() {
        return 20.0; // 20% discount
    }
}

class VIPCustomer extends Customer {
    @Override
    public double getDiscount() {
        return 30.0; // 30% discount
    }
}

public class s22 {
    public static void main(String[] args) {
        // Array of different types of customers
        Customer[] customers = {
            new RegularCustomer(),
            new PremiumCustomer(),
            new VIPCustomer()
        };

        double basePrice = 1000.0; // Example base price

        // Calculate final price for each customer type
        for (Customer customer : customers) {
            double discount = customer.getDiscount();
            double finalPrice = basePrice * (1 - discount / 100);
            System.out.println("Final Price for " + customer.getClass().getSimpleName() + ": " + finalPrice);
        }
    }
}


// interface Customers {
//  int total = 100;
//  void Discount () ;
//     // void Discount (int n) {
//     // int d = (this.total *(100-n)/100) ;
//     // System.out.println("Your Discounted Price is : "+ d + "\n" );
//     // }
// }

// class RegCustomer implements Customers {
//     int total ;
//     RegCustomer(int n) {
//     this.total = n;
//     }
//     public void Discount () {
//     int d = this.total *(4/5) ;
//     System.out.println("Your Discounted Price is : "+ d + "\n" );
//     }
// }

// public class s22 {
//     public static void main (String arg[]){
//         RegCustomer R1 = new RegCustomer(100);
//         R1.Discount();
//     }
// }



// Define an interface with a method for discount
// interface Discountable {
//     double getDiscount(); // Method to return discount percentage
// }

// // Base class implementing Discountable interface
// class Customer implements Discountable {
//     // Default discount method (0%)
//     @Override
//     public double getDiscount() {
//         return 0.0;
//     }

//     // Method to calculate final price after applying the discount
//     public double calculateFinalPrice(double price) {
//         double discount = getDiscount();
//         return price - (price * discount / 100);
//     }
// }

// // Subclass for RegularCustomer with 10% discount
// class RegularCustomer extends Customer {
//     @Override
//     public double getDiscount() {
//         return 10.0;
//     }
// }

// // Subclass for PremiumCustomer with 20% discount
// class PremiumCustomer extends Customer {
//     @Override
//     public double getDiscount() {
//         return 20.0;
//     }
// }

// // Subclass for VIPCustomer with 30% discount
// class VIPCustomer extends Customer {
//     @Override
//     public double getDiscount() {
//         return 30.0;
//     }
// }

// // Main class to demonstrate runtime polymorphism
// public class CustomerTest {
//     public static void main(String[] args) {
//         // Instances of different customer types
//         Customer regular = new RegularCustomer();
//         Customer premium = new PremiumCustomer();
//         Customer vip = new VIPCustomer();

//         double price = 1000.0; // Original price

//         System.out.println("Final price for RegularCustomer: " + regular.calculateFinalPrice(price));
//         System.out.println("Final price for PremiumCustomer: " + premium.calculateFinalPrice(price));
//         System.out.println("Final price for VIPCustomer: " + vip.calculateFinalPrice(price));
//     }
// }
