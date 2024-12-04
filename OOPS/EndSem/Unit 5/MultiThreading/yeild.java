public class yeild{
    public static void main (String[] arg) {
        yThread s1 = new yThread();
            s1.start();
            int i=0;
            while(true) {
                System.out.println("main Thread : " + i++);
            }
           }
}

class yThread extends Thread{
    public void run () {
        int i=0;
        while(true) {
            System.out.println("yThread: " + i++);
        }
    }
}
