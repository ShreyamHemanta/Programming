import java.util.*;
public class A5_Q2
{
	public static void main(String[] args) 
	{
		Scanner ob=new Scanner(System.in);
		int a[]=new int[10];
		int e=0,o=0;
		System.out.println("Enter 10 numbers.");
		for(int i=0;i<10;i++)
		{
		    a[i]=ob.nextInt();
		}
		for(int i=0;i<10;i++)
		{
		    if(a[i]%2==0)
		    {
		        e++;
		    }
		    else
		    {
		        o++;
		    }
		}
		System.out.println("Even="+e);
		System.out.println("Odd="+o);
	}
}
