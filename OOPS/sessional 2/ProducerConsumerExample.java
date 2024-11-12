/*
Write a multi-threaded program to
have two producer threads, each writes (push) total 7 integer items to the same
(common) stack. The producers enter into sleep state for 500 ms after writing
every item. There is one consumer thread that reads (pop) from the same stack
and enters into sleep state then-after for 600 ms. Assume stack size as 10.
Incorporate all required conditions so that all valid items are popped only once
and there is no stack overflow & underflow.
 */
import java.util.Stack;

class SharedStack {
    private final Stack<Integer> stack = new Stack<>();
    private final int MAX_SIZE = 10;

    // Method for the producer to push items onto the stack
    public synchronized void push(int item) throws InterruptedException {
        while (stack.size() == MAX_SIZE) {
            System.out.println("Stack is full. Producer is waiting.");
            wait(); // Wait if the stack is full
        }
        stack.push(item);
        System.out.println("Produced: " + item);
        notifyAll(); // Notify other threads that the stack state has changed
    }

    // Method for the consumer to pop items from the stack
    public synchronized int pop() throws InterruptedException {
        while (stack.isEmpty()) {
            System.out.println("Stack is empty. Consumer is waiting.");
            wait(); // Wait if the stack is empty
        }
        int item = stack.pop();
        System.out.println("Consumed: " + item);
        notifyAll(); // Notify other threads that the stack state has changed
        return item;
    }
}

class Producer extends Thread {
    private final SharedStack stack;
    private final int id;

    public Producer(SharedStack stack, int id) {
        this.stack = stack;
        this.id = id;
    }

    @Override
    public void run() {
        try {
            for (int i = 1; i <= 7; i++) { // Each producer pushes 7 items
                stack.push(i + (id - 1) * 10); // Unique items based on producer ID
                Thread.sleep(500); // Sleep for 500 ms after each push
            }
        } catch (InterruptedException e) {
            Thread.currentThread().interrupt();
            System.out.println("Producer " + id + " interrupted.");
        }
    }
}

class Consumer extends Thread {
    private final SharedStack stack;

    public Consumer(SharedStack stack) {
        this.stack = stack;
    }

    @Override
    public void run() {
        try {
            for (int i = 1; i <= 14; i++) { // Consume total 14 items
                stack.pop();
                Thread.sleep(600); // Sleep for 600 ms after each pop
            }
        } catch (InterruptedException e) {
            Thread.currentThread().interrupt();
            System.out.println("Consumer interrupted.");
        }
    }
}

public class ProducerConsumerExample {
    public static void main(String[] args) {
        SharedStack stack = new SharedStack();
        
        // Create two producers
        Producer producer1 = new Producer(stack, 1);
        Producer producer2 = new Producer(stack, 2);

        // Create one consumer
        Consumer consumer = new Consumer(stack);

        // Start the producer and consumer threads
        producer1.start();
        producer2.start();
        consumer.start();

        // Wait for threads to complete
        try {
            producer1.join();
            producer2.join();
            consumer.join();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        System.out.println("All threads completed.");
    }
}
