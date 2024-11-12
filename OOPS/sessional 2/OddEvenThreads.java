/*
 Write a program in Java to create two threads, one thread will print odd
numbers and second thread will print even numbers from 1 to 50.
 */

 class OddThread extends Thread {
    public void run() {
        for (int i = 1; i <= 50; i += 2) {
            System.out.println("Odd Thread:  " + i); 
        }
    }
}

class EvenThread extends Thread {
    public void run() {
        for (int i = 2; i <= 50; i += 2) {
            System.out.println("Even Thread: " + i);
        }
    }
}

public class OddEvenThreads {
    public static void main(String[] args) {
        OddThread oddThread = new OddThread();
        EvenThread evenThread = new EvenThread();
        
        // oddThread.start();
        evenThread.start();
    }
}
