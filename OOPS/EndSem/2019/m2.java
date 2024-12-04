class Date {
 private String m;
 private int d;
 private int y;

 public Date (String s , int a , int b) {
m=s ;
d=a;
y=b;
 }
 public void display() {
    System.out.println(m +" " +  d +"," + y);
 }
}
public class m2 {
    public static void main(String[] args) {
        Date d1 = new Date("June" , 10 ,12) ;
        d1.display();
}
}
