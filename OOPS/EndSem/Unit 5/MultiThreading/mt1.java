
public class mt1 {
    public static void main(String[] arg) {
        Mythread t2 = new Mythread(); // Create a thread
        t2.start(); // Start the thread

        int i = 0;
        while (i < 100) {
            System.out.println("World");
            i++;
        }
    }
}

class Mythread extends Thread {
    public void run() {
        System.out.println("Thread Started 2");
        int i = 0;
        while (i < 100) {
            System.out.println("Hello");
            i++;
        }
    }
}
