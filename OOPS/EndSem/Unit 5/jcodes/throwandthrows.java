
public class throwandthrows {

    // throws ArithmeticException => this fn can give ArithmeticException , so use try and catch when calling 
    static int getnum (int arr[]) throws ArithmeticException {
        return arr[8] ;
    } 

    static int getnum2 (int arr[] ) {
        if(arr.length <8) {
            throw new ArithmeticException ("arrsize is <8") ;
        }
        return arr[8] ;
    }
    public static void main (String[] arg) {
        int arr[] = new int[3];
        try {
            getnum(arr) ;
        } catch (Exception e) {
            System.out.println(e.getMessage());
        }

        getnum2(arr);

    }

}
