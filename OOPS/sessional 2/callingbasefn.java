
class base {
    private int a ;
    base (int a) {
        this.a =a ;
    }
    public void display() {
        System.out.println("a : " + this.a);
    }
}
class derived extends base {
private int b;

derived (int a , int b) {
    super(a); // sends data to base constructor
    this.b=b;
}
@Override
public void display () {
   super.display(); // calls base fn
   System.out.println("b : " + b);
}
}

public class callingbasefn {
    public static void main (String arg[]) {
derived d1 = new derived(1,2);
d1.display();
    }
}
