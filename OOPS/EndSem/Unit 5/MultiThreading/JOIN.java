public class join{
    public static void main (String[] arg) throws InterruptedException {
        jThread s1 = new jThread();
        s1.setDaemon(true); // sets Thread daemon ie also ends if main ends 
            s1.start();
            Thread mainThread = Thread.currentThread();
            mainThread.join();  // joins main thread with every thread running and waists for them to complete also 
    }
}

class jThread extends Thread{
    public void run () {
        int i=0;
        while(true) {
            System.out.println(i++);
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                System.out.println("Interrupted");
            }
        }
    }
}
