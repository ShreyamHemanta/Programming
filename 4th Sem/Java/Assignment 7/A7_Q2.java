import java.util.*;

class shape {
	double area;
	public void showArea(){
	        System.out.println("Area is: "+area+" square units");
    }
}
class circle extends shape{
	double r;
	    circle(double r){
	        this.r=r;
	        area=3.14*r*r;
	        System.out.println("Circle ");
	    }
}
class rectangle extends shape{
    double l, b;
    rectangle(double l, double b){
        this.l=l;
        this.b=b;
        area=l*b;
        System.out.println("Rectangle ");
    }
}

public class A7_Q2 {
	public static void main(String args[]) {
		Scanner ob=new Scanner(System.in);
		System.out.println("Enter Radius : ");
		double r=ob.nextDouble();
		circle c = new circle(r);
		c.showArea();
		System.out.println("Enter Length : ");
		double l=ob.nextDouble();
		System.out.println("Enter Breadth : ");
		double b=ob.nextDouble();
		rectangle rec= new rectangle(l, b);
        rec.showArea();
   }
}