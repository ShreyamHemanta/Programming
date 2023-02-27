import java.util.*;
public class A4_Q4
{
    public static void main(String[] args)
	{
	    Scanner ob=new Scanner(System.in);
	    System.out.println("Enter a number.");
	    int n=ob.nextInt();
	    int a,x=0,p=0;
	    n=x;
	    while(n!=0)
	    {
	        a=n%10;
	        p=(p*10)+a;
	        n=n/10;
	    }
	    if(p==x)
	    {
	        System.out.println("It is a palindrome no.");
	    }
	    else
	    {
	        System.out.println("It is not a palindrome no.");
        }
	}
}