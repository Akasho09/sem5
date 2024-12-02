import java.util.Scanner;

public class multiTry {
    public static void main (String[] arg) {
        while(true){

            Scanner s1 = new Scanner(System.in); 
            int[] arr = new int[5] ;
            for(int i=0;i<5;i++) {
                arr[i]=s1.nextInt();
            }

            // divisions 
            try {
                for(int i=1;i<5;i++) { 
                    try {
                        System.out.println("Division of " + i + " and " + ( i-1 ) +" is "+ (arr[i]/arr[i-1]));
                    } catch (ArithmeticException e) {
                        System.out.println(e);
                    }
                } 
            System.out.println(arr[7]/arr[2]);
            } catch (Exception e) {
                System.out.println(e);
            } finally {
                System.out.println(" done done ");

                // System.out.println("bsdk pagal hai kya" + arr[7]/arr[2]);
            }

        }

    }

}
