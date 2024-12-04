class PriorityThread extends Thread {
    // Override the run method to print "Running"
    @Override
    public void run() {
        System.out.println("Running in thread: " + Thread.currentThread().getName());
    }
}

public class ma {
    public static void main(String[] args) {
        // Create three instances of PriorityThread
        PriorityThread thread1 = new PriorityThread();
        PriorityThread thread2 = new PriorityThread();
        PriorityThread thread3 = new PriorityThread();

        // Set the priorities of the threads
        thread1.setPriority(1);  // Minimum priority
        thread2.setPriority(5);  // Default priority
        thread3.setPriority(10); // Maximum priority

        // Start the threads
        thread1.start();
        thread2.start();
        thread3.start();

        // Print the priorities of the threads
        System.out.println("Priority of thread1: " + thread1.getPriority());
        System.out.println("Priority of thread2: " + thread2.getPriority());
        System.out.println("Priority of thread3: " + thread3.getPriority());

        // Print the priority of the main thread
        System.out.println("Priority of main thread: " + Thread.currentThread().getPriority());
    }
}
