### `Multithreading` is a Java feature that allows concurrent execution of two or more parts of a program for maximum utilization of CPU. 
- Each part of such program is called a thread. So, threads are light-weight processes within a process.

Threads can be created by using two mechanisms : 

- Extending the Thread class 
- Implementing the Runnable Interface 

If we extend the Thread class, our class cannot extend any other class because Java doesn’t support multiple inheritance. But, if we implement the Runnable interface, our class can still extend other base classes.


### States of Thread 
![alt text](<Screenshot 2024-12-04 at 12.11.43 AM.png>)

### Priorities in MT 
The default priority is set to 5 as excepted.
Minimum priority is set to 1.
Maximum priority is set to 10.
Here 3 constants are defined in it namely as follows:

public static int NORM_PRIORITY
public static int MIN_PRIORITY
public static int MAX_PRIORITY