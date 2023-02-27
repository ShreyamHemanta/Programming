import java.util.*;
class student
{
	int roll;
	String name;
	double cgpa;
}
public class A6_Q3
{
	public static void main(String args[])
	{
		Scanner ob=new Scanner(System.in);
		int n;
		System.out.println("Enter size.");
		n=ob.nextInt();
		student a[]=new student[n];
		for(int i=0;i<n;i++)
		{
			a[i]=new student();
		}
		System.out.println("Enter details of the students.");
		for(int i=0;i<n;i++)
		{
			System.out.println("Enter the roll no.");
			a[i].roll=ob.nextInt();
			System.out.println("Enter the name.");
			a[i].name=ob.next();
			System.out.println("Enter the CGPA.");
			a[i].cgpa=ob.nextDouble();
		}
		System.out.println("DETAILS:");
		for(int i=0;i<n;i++)
		{
			System.out.println("Student "+i+1+":");
			System.out.println("Roll No.="+a[i].roll);
			System.out.println("Name="+a[i].name);
			System.out.println("CGPA="+a[i].cgpa);
		}
		double min=a[0].cgpa;
		int pos=0;
		for(int i=0;i<n;i++)
		{
			if(a[i].cgpa<min)
			{
				min=a[i].cgpa;
				pos=i;
			}
		}
		System.out.println(a[pos].name+" has the lowest CGPA");
	}
}