


public class m{

    static void checkage (int a) {
        if (a<18) {
            throw new ArithmeticException("Access denied - You must be at least 18 years old.");
        }
        else {
            System.out.println("Access granted - You are old enough!");
          }
    }
    public static void main (String[] arg) {
        int[] array = {1, 2, 3};
        try {
            System.out.println(array[10]);   
        }
        catch (Exception e){
            System.out.println("Something went wrong.");
        }
        finally {
            System.out.println("The 'try catch' is finished.");
        }

        checkage(15); // Set age to 15 (which is below 18...)
        System.out.println("this wouldnt execute if age<18.");

    }
}