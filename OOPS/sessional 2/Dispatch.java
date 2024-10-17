class A {
   public void eg () {
        System.out.println("eg A");
    }
}

class B extends A {
    public void eg () {
        System.out.println("eg B");
    }
}

class C extends A {
    public void eg () {
        System.out.println("eg C");
    }
}
public class Dispatch {
   public static void main (String arg[]) {
    A a =  new A();
    B b = new B();
    C c = new C() ;
    A r;
    r=a;
    r.eg();
    r=b;
    r.eg();    
    r=c;
    r.eg();
   }
}