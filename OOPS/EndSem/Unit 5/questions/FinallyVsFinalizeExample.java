// Custom class to demonstrate the finalize method
class MyResource {
    // This method is called just before an object is garbage collected
    @Override
    protected void finalize() {
        System.out.println("finalize method is called. Object is about to be garbage collected.");
    }
}

public class FinallyVsFinalizeExample {
    
    public static void testFinallyBlock() {
        try {
            System.out.println("Inside try block");
            // Simulating an exception
            int result = 10 / 0; // This will throw ArithmeticException
        } catch (ArithmeticException e) {
            System.out.println("Exception caught: " + e);
        } finally {
            // The code inside finally block is always executed
            System.out.println("This is the finally block. It will always execute.");
        }
    }

    public static void testFinalizeMethod() {
        // Creating an object of MyResource class
        MyResource resource = new MyResource();
        
        // Nullifying the reference to the object to make it eligible for garbage collection
        resource = null;
        
        // Requesting garbage collection (it might or might not run immediately)
        System.gc();  // Calling the garbage collector
        
        try {
            Thread.sleep(1000); // Sleep for a short time to allow GC to run
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }
    
    public static void main(String[] args) {
        System.out.println("Demonstrating finally block:");
        testFinallyBlock(); // Demonstrating the use of finally block
        
        System.out.println("\nDemonstrating finalize method:");
        testFinalizeMethod(); // Demonstrating the use of finalize method
    }
}
