import java.util.*;
public class A5_Q1
{
	public static void main(String[] args) 
	{
		Scanner ob=new Scanner(System.in);
		System.out.println("Enter three numbers.");
		int a=ob.nextInt();
		int b=ob.nextInt();
		int c=ob.nextInt();
		if(a>b && a>c)
		{
		    System.out.println(a+"is the largest.");
		}
		else if(b>a && b>c)
		{
		    System.out.println(b+"is the largest.");
		}
		else if(c>a && c>b)
		{
		    System.out.println(c+"is the largest.");
		}
		else
		{}
	}
}