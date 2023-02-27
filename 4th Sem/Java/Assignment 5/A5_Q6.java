import java.util.*;
public class A5_Q6
{
	public static void main(String[] args) 
	{
		Scanner ob=new Scanner(System.in);
	    System.out.println("Menu.");
		System.out.println("1. Area of Circle.");
		System.out.println("2. Area of Square.");
		System.out.println("3. Area of Triangle.");
		System.out.println("Enter choice.");
		int ch=ob.nextInt();
		switch(ch)
		{
			case 1:
			System.out.println("Enter radius.");
			double r=ob.nextDouble();
			double a1=3.14*r*r;
			System.out.println("Area of the circle is "+a1);
			break;
			case 2:
			System.out.println("Enter side.");
			double s=ob.nextDouble();
			double a2=s*s;
			System.out.println("Area of the square is "+a2);
			break;
			case 3:
			System.out.println("Enter base and height.");
			double b=ob.nextDouble();
			double h=ob.nextDouble();
			double a3=0.5*b*h;
			System.out.println("Area of the triangle is "+a3);
			break;
			default:
			System.out.println("Invalid Choice.");
		}
	}
}