


public class ThreadMethods {
    public static void main (String[] arg) {
        Thread2 t1 = new Thread2("AKASH", 7);
        t1.start();
        System.out.println(t1.getName());
        // System.out.println(t1.getId());
        System.out.println(t1.getPriority());
        System.out.println(t1.getState());
        System.out.println(t1.isAlive());
    }
}


class Thread2 extends Thread {
    public void run () {
        System.out.println("T called");
    }
    public Thread2 (String name , int p) {
        super (name ) ;
        setPriority(p) ;
    }
}