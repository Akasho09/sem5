// if not static then Y will be called 
class X {
    static void method() {
        System.out.println("X");
    }
}

class Y extends X {
    static void method() {
        System.out.println("Y");
    }
}

public class s2 {
    public static void main (String arg[]) {
int arr1[] = {1,2,3};
int arr2[] = {1,2,3};
if(arr1==arr2) {
    System.out.println("same");
}
else {
    System.out.println("Not equal");
}

X.method();
    X obj =  new Y();
    obj.method();

}
}
