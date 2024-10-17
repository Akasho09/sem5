class Student {
    int rollno ;
    String name ;

public Student (int r , String n) {
this.name = n;
this.rollno = r;
}


public String Showdata () {
    return ("Roll No : " + this.rollno + "\nName : " + this.name);
}



// @Override
public String toString() {
return ("Roll No : " + this.rollno + "\nName : " + this.name);
}
// Overriding the toString methof from Object class  
// without this output will be -- "Student@6d1e7682"

// package java.lang;
// public class Object {
//     public String toString () {
//         return getClass().getName() + "@" + Integer.toHexString(hashCode());
//     }
// }

}



public class toStringsemo {
public static void main(String arg[]) {
         Student s ;
         s = new Student(6,  " akash");
         System.out.println(s.Showdata());
         System.out.println(s);
         System.out.println(s.toString());

    }
}


