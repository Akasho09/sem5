


public class trycatch{

    static void checkage (int a) {
        if (a<18) {
            throw new ArithmeticException("Access denied - You must be at least 18 years old.");
        }
        else {
            System.out.println("Access granted - You are old enough!");
          }
    }
    public static void main (String[] arg) {
        int array[] = new int[5];
        try {
            int r = 3/0;
            System.out.println(array[10]);   
        }
        catch (ArrayIndexOutOfBoundsException e){
            System.out.println("Array size is lesser \n "  + e.getMessage());
        }
        catch (ArithmeticException e){
            System.out.println("ArithmeticException \n ----- "  + e.getMessage() + "\n" + e.getStackTrace() );
        }
        finally {
            System.out.println("The 'try catch' is finished.");
        }

        // checkage(15); // Set age to 15 (which is below 18...)
        System.out.println("this wouldnt execute if age<18.");

    }
}