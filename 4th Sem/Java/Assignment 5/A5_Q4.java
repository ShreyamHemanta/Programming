import java.util.*;
public class A5_Q4
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
		
		for(int i=0;i<n;i++)
		{
			int c=0;
		    for(int j=0;j<n;j++)
			{
				if(a[i]==a[j])
				{
				    c++;
				}
			}
			System.out.println(a[i]+" occurs "+c+" times.");
		}
	}
}