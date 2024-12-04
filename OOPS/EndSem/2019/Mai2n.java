class SavingsAccount {
    // Static variable for annual interest rate
    static double annualInterestRate;
    
    // Instance variable for savings balance
    private double savingsBalance;
    
    // Constructor to initialize the balance for an account
    public SavingsAccount(double balance) {
        savingsBalance = balance;
    }
    
    // Method to calculate monthly interest and update the savings balance
    public void calculateMonthlyInterest() {
        double monthlyInterest = savingsBalance * (annualInterestRate / 12);
        savingsBalance += monthlyInterest;
    }
    
    // Static method to modify the annual interest rate
    public static void modifyInterestRate(double newInterestRate) {
        annualInterestRate = newInterestRate;
    }
    
    // Method to get the current balance
    public double getSavingsBalance() {
        return savingsBalance;
    }
}
public class Mai2n {
    public static void main(String[] args) {
        // Set the initial annual interest rate to 4%
        SavingsAccount.modifyInterestRate(0.04);
        
        // Create two SavingsAccount objects with initial balances
        SavingsAccount saver1 = new SavingsAccount(2000.00);
        SavingsAccount saver2 = new SavingsAccount(3000.00);
        
        // Calculate monthly interest and update the balances for saver1 and saver2
        saver1.calculateMonthlyInterest();
        saver2.calculateMonthlyInterest();
        
        // Print the new balances after applying the interest for the first month
        System.out.printf("Saver1's new balance: $%.2f\n", saver1.getSavingsBalance());
        System.out.printf("Saver2's new balance: $%.2f\n", saver2.getSavingsBalance());
        
        // Set the annual interest rate to 5%
        SavingsAccount.modifyInterestRate(0.05);
        
        // Calculate monthly interest for the second month
        saver1.calculateMonthlyInterest();
        saver2.calculateMonthlyInterest();
        
        // Print the new balances after applying the interest for the second month
        System.out.printf("Saver1's new balance after second month: $%.2f\n", saver1.getSavingsBalance());
        System.out.printf("Saver2's new balance after second month: $%.2f\n", saver2.getSavingsBalance());
    }
}
