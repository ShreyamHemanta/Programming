import java.util.*;
public class A5_Q3
{
	public static void main(String[] args) 
	{
		Scanner ob=new Scanner(System.in);
	    System.out.println("Enter the size of the array.");
	    int n=ob.nextInt();
		int a[]=new int[n];
		System.out.println("Enter elements in the array.");
		for(int i=0;i<n;i++)
		{
		    a[i]=ob.nextInt();
		}
		System.out.println("Original Array.");
		for(int i=0;i<n;i++)
		{
		    System.out.println(a[i]);
		}
		for(int i=0;i<n;i++)
		{
		    for(int j=0;j<(n-i-1);j++)
		    {
		        if(a[j]>a[j+1])
		        {
		            int t=a[j];
		            a[j]=a[j+1];
		            a[j+1]=t;
		        }
		    }
		}
		System.out.println("Sorted Array.");
		for(int i=0;i<n;i++)
		{
		    System.out.println(a[i]);
		}
	}
}