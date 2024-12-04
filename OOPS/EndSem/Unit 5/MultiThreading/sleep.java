
// It throws an InterruptedException if the thread is interrupted while sleeping.
//  which is checked exception, so must be handled accordingly

public class sleep {
    public static void main (String[] arg) throws InterruptedException {
        SleepThread s1 = new SleepThread();
            s1.start();
            s1.interrupt() ;
            try { Thread.sleep(2000); } catch(InterruptedException e) {}
            s1.interrupt() ;

            // for(int i=0;i<10000000;i++) {System.out.println(i);}
    }
}


class SleepThread extends Thread{
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