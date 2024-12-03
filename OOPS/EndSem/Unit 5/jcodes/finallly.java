
public class finallly { 
    // if we make a method which throws exception and we want it to still do some operations after that we use finally block
    static void method1 () throws Exception {
        try { 
            throw new Exception(); 
        } finally {
            System.out.println("Meth1 ops ");     
        }
    }
    
    static void stack (int size ) {
        
    }
    


    public static void main (String[] arg) {
        try {
            method1();
            // System.out.println(10/0);
        } catch(Exception e){
            System.out.println(e.getMessage());
        } finally {
            System.out.println("End is near");
        }

        
    }
}
