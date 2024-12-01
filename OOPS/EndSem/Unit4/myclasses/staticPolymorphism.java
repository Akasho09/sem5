package myclasses;

class base2 {
final void  show(){
    System.out.println("Show fn with 0 arguments");
}
void show(int a){
    System.out.println("Show fn with 1 arguments 'a' : " + a);
}
void show(int a , int b){
    System.out.println("Show fn with 2 arguments 'a' : " + a + " b : " + b );
}
void show(String s){
    System.out.println("Show fn with 1 arguments 'S' : " + s);
}
}

class derived2 extends base2 {
    // void show(){
    //     System.out.println("Show fn with 0 arguments in derived2");
    // } 
    void show(int a){
        System.out.println("Show fn with 1 arguments in derived2 'a' : " + a);
    }
    void show(int a , int b){
        System.out.println("Show fn with 2 arguments in derived2 'a' : " + a + " b : " + b );
    }
    void show(String s){
        System.out.println("Show fn with 1 arguments in derived2 'S' : " + s);
    }
}

public class staticPolymorphism {
    public static void main (String[] arg){
        base2 b1 = new base2 () ;
        b1.show();
        b1.show(12);
        b1.show(12,13);
        b1.show("akash");        

        derived2 d1 = new derived2();
        d1.show();
        d1.show(12);
        d1.show(12,13);
        d1.show("akash");    }
}
