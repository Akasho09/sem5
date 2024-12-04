
class Mythread2 extends Thread {
    public void run() {
     int i=0;
     while(i<100){
         System.out.println("Hello");
         i++;
     }
     }
     public static void main (String[] arg) {
        Mythread2 t1 = new Mythread2() ;
        t1.start();
        int i=0;
        while(i<100){
            System.out.println("World");
            i++;
        }
    }
 }
