interface Animal { 
    int eyes =2 ;
    void eats ();
     }
    interface Herbivorous { void eats (); }
    
    class Horse implements Animal , Herbivorous {
      public void eats () {
    System.out.println("Horse Etas");
      }
    }
    
    public class interfaces{
        public static void main (String arg[]) {
    
        }
    }