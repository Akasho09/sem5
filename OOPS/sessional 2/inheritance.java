class Shape {
    int sides ;
    public void display () {
    System.out.println( "Shape has " + this.sides + " sides\n") ;
    } 
    }
    
    class Circle extends Shape {
        int radius;
    Circle(int r) {
        this.radius =r;
    }
    }
    
    class Triangle extends Shape {
        int s1;
        int s2;
        int s3;
    }
    
    // Multilevel Inheritance 
    class EquiTriangle extends Triangle {
       
        
    }
    public class OOPS {
       public static void main (String arg[]) {
           Circle c1 = new Circle(5) ;
           c1.sides= 3;
           c1.display() ;
       }
    }