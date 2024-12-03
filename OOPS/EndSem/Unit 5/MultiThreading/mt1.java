
class Mythread extends Thread {
    public void run() {
     int i=0;
     while(i<100){
         System.out.println("Hello");
         i++;
     }
     }
 }

public class mt1 {
    public static void main (String[] arg) {
        Mythread t1 = new Mythread() ;
        t1.start();
        int i=0;
        while(i<100){
            System.out.println("World");
            i++;
        }
    }
}
