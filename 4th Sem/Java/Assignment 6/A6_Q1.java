import java.util.*;
class abc
{
	int s;
	void subtract(int x)
	{
	     s=--x;
	     System.out.println(s);
	}
	void subtract(int a, int b)
	{
		s=a-b;
		System.out.println(s);
	}
}
public class A6_Q1
{
	public static void main(String args[])
	{
		abc ab=new abc();
		ab.subtract(7);
		ab.subtract(7,2);
	}
}
