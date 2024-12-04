public class daemon {
    public static void main (String[] arg) throws InterruptedException {
        dThread s1 = new dThread();
        s1.setDaemon(true); // sets Thread daemon ie also ends if main ends 
            s1.start();
            try { Thread.sleep(5000);
            } catch (InterruptedException e) {}
    }
}


class dThread extends Thread{
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