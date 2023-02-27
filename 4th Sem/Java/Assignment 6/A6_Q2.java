import java.util.*;
class abc
{
	double a;
	void area(double r)
	{
		a=3.14*r*r;
		System.out.println(a);
	}
	void area(double b, double h)
	{
		a=0.5*b*h;
		System.out.println(a);
	}
	void area(int s)
	{
		a=s*s;
		System.out.println(a);
	}
}
public class A6_Q2
{
	public static void main(String args[])
	{
		Scanner ob=new Scanner(System.in);
		abc ab=new abc();
		int ch;
		System.out.println("Menu.");
		System.out.println("1. Area of Circle.");
		System.out.println("2. Area of Triangle.");
		System.out.println("3. Area of Square.");
		System.out.println("Enter choice.");
		ch=ob.nextInt();
		switch(ch)
		{
			case 1:
			System.out.println("Enter radius");
			double r=ob.nextDouble();
			ab.area(r);
			break;
			case 2:
		    System.out.println("Enter base.");
			double b=ob.nextDouble();
			System.out.println("Enter height.");
			double h=ob.nextDouble();
			ab.area(b,h);
			break;
			case 3:
			System.out.println("Enter side.");
			int s=ob.nextInt();
			ab.area(s);
			break;
			default:
			System.out.println("Invalid Choice.");
		}
	}
}