
public class Runnab {
    public static void main (String[] arg){
    Example e1 = new Example(); //creating a class of example which extends Runnable that is capable of creating a thread 
    Thread t1 = new Thread(e1, "akash");  // creating a thread to run Example   // Thread is horse , while Runnable is Cart 
    t1.start() ;


    for(int i=0;i<10;i++){
        System.out.println("Thread calling");
    }


    }
}

class Example implements Runnable { //
    public void run () {
        System.out.println("Thread Called");
        for(int i=0;i<10;i++){
            System.out.println("Main calling");
        }
    }
} 
class Example2 extends Example {

}