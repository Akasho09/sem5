package myclasses;

public class first {
    int a;
    public first(){}
    public first(int b) { this.a = b ;} //this. not this->
    public first(String s){ a=Integer.parseInt(s); } // Constructor Overloading 
    public void display(){
        System.out.println("Element is : " + a); // + 
    }
}
