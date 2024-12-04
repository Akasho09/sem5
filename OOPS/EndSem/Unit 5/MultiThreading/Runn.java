

public class Runn {

    public static void main ( String[] arg) {
        Thread t1 = new Thread(new E2("aksh" ,9)) ;
        t1.start();
        t1.setPriority(8);
        System.out.println(t1.getName());
        // System.out.println(t1.getId());
        System.out.println(t1.getPriority());
        System.out.println(t1.getState());
        System.out.println(t1.isAlive());

    }
    
}


class E2 implements Runnable {
    // constructors 
    // public E2 (String name , int p){
    //     super(name);
    //     setPriority(p);
    // }

    public void run() {
        System.out.println("Gunnah");
    }
}