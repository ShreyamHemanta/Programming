import java.util.*;
import java.lang.Math.*;
public class A4_Q8
{
    public static void main(String[] args)
	{
	    Scanner ob=new Scanner(System.in);
	    System.out.println("Enter a binary no.");
	    int b=ob.nextInt();
	    int d=0,p=0;
        while(b!=0)
        {
           d+=((b%10)*Math.pow(2,p));
           b=b/10;
           p++;
        }
        System.out.println(d);
	}
}