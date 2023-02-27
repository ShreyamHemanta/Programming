import java.util.*;
import java.lang.Math.*;
public class A4_Q9
{
    public static void main(String[] args)
	{
	    Scanner ob=new Scanner(System.in);
	    System.out.println("Enter a decimal no.");
	    int d=ob.nextInt();
	    int b=0,p=0;
        while(d!=0)
        {
           b+=((d%2)*Math.pow(10,p));
           d=d/2;
           p++;
        }
        System.out.println(b);
	}
}