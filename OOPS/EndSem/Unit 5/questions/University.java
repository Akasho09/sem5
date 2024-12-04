// Custom Exception Class for Promotion Criteria

import java.util.Scanner;

class PromotionException extends Exception {
    public PromotionException(String message) {
        super(message); // Pass the message to the parent Exception class
    }
}

public class University {
    
    // Method to check if a student can be promoted based on CGPA
    public static void checkPromotion(double cgpa) throws PromotionException {
        if (cgpa < 4.5) {
            // Throw custom exception if CGPA is less than 4.5
            throw new PromotionException("Student cannot be promoted. CGPA is less than 4.5.");
        } else {
            // If CGPA is greater than or equal to 4.5, promotion is allowed
            System.out.println("Student is promoted to the next academic year.");
        }
    }

    public static void main(String[] args) {
        while(true){
        double studentCGPA = 4.0; // Example CGPA of the student
        Scanner s1 = new Scanner (System.in) ;
        studentCGPA = s1.nextInt() ;
        try {
            // Check if the student meets the promotion criteria
            checkPromotion(studentCGPA);
        } catch (PromotionException e) {
            // Handle the PromotionException if CGPA is less than 4.5
            System.out.println("Error: " + e.getMessage());
        }
        }
        
    }
}
