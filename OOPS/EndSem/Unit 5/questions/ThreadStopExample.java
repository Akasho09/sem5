class MyThread extends Thread {
    private boolean running = true;

    @Override
    public void run() {
       //         while (!Thread.currentThread().isInterrupted()) {
        while (running) {
            // Simulate some work
            System.out.println("Thread is running...");
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
        System.out.println("Thread stopped!");
    }

    public void stopThread() {
        running = false; // Set running to false to stop the thread
    }
}

public class ThreadStopExample {
    public static void main(String[] args) throws InterruptedException {
        MyThread thread = new MyThread();
        thread.start();
        
        // Wait for 5 seconds before stopping the thread
        Thread.sleep(5000);
        thread.stopThread(); // Stop the thread
    }
}
