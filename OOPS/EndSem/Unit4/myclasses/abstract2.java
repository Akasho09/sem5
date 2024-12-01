package myclasses ;

abstract class Mobile{ // abstract class 
int price ;
String brand;
Mobile(){ System.out.println("Mobile Default constructor called"); }
abstract void details(); // abstract method
void tAndc() { // concreteMethod
    System.out.println("Price is non Negitioable ");
}
// default void tAndCs2 () { // Default methods are allowed only in interfaces
//     System.out.println("No fkin tncs ");
//     }
static int add(int a, int b) { // static method
    return a + b;
}
}

class m1series extends Mobile {
    m1series(){System.out.println("m1series Default constructor called"); }
    m1series(int p){ 
        System.out.println("m1series constructor called");
        price=p; brand = "Apple" ;
    }
    void details(){
        System.out.println("\nPrice : " + price + "\nBrand : " + brand);
    }
}

public class abstract2 {
    public static void main (String[] arg) {
        m1series v1 = new m1series(10000);
        v1.details();
        v1.tAndc();
        System.out.println(v1.add(2,4)) ;
    }
}
