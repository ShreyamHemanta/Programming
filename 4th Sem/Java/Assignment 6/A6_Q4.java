import java.util.*;
class number
{
    int x ,pos1=0,pos2=0;
	number(int n)
	{
		x=n;
	}
	int a[]=new int[x];
	Scanner st=new Scanner(System.in);
	void read()
	{
		System.out.println("Enter the numbers.");
		for(int i=0;i<x;i++)
		{
			a[i]=st.nextInt();
		}
		display();
	}
	void swap()
	{
		int min=a[0],max=a[0];
		for(int i=0;i<x;i++)
		{
			if(a[i]<min)
			{
				min=a[i];
				pos1=i;
			}
		}
		for(int i=0;i<x;i++)
		{
			if(a[i]>max)
			{
				max=a[i];
				pos2=i;
			}
		}
		int t=a[pos1];
		a[pos1]=a[pos2];
		a[pos2]=t;
		display();
	}
	void display()
	{
		for(int i=0;i<x;i++)
		{
		    System.out.println(a[i]);
		}
	}
}
public class A6_Q4
{
    public static void main (String[] args)
    {
        Scanner ob=new Scanner(System.in);
        System.out.println("Enter the size.");
        int n=ob.nextInt();
        number num=new number(n);
        num.read();
        num.swap();
    }
}