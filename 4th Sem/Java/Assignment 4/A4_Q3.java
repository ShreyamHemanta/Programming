import java.util.*;
public class A4_Q3
{
    public static void main(String[] args)
	{
	    Scanner ob=new Scanner(System.in);
	    System.out.println("Enter your marks.");
	    int marks=ob.nextInt();
	    int ch;
	    if(marks>=90 && marks<=100)
	    {
	        ch=1;
	    }
	    else if(marks>=80 && marks<90)
	    {
	        ch=2;
	    }
	    else if(marks>=70 && marks<80)
	    {
	        ch=3;
	    }
	    else if(marks>=60 && marks<70)
	    {
	        ch=4;
	    }
	    else if(marks>=50 && marks<60)
	    {
	        ch=5;
	    }
	    else if(marks>=40 && marks<50)
	    {
	        ch=6;
	    }
	    else
	    {
	        ch=7;
	    }
	    switch(ch)
	    {
	        case 1:
	            System.out.println("O");
	            break;
	        case 2:
	            System.out.println("E");
	            break;
	        case 3:
	            System.out.println("A");
	            break;
	        case 4:
	            System.out.println("B");
	            break;
	        case 5:
	            System.out.println("C");
	            break;
	        case 6:
	            System.out.println("D");
	            break;
	        case 7:
	            System.out.println("F");
	            break;
	        default:
	            System.out.println("Grade Invalid.");
        }
	}
}