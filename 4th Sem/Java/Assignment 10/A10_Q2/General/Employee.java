package A10_Q2.General;
import java.util.*;

public class Employee
{
	protected int empid;
	private String ename;
	public double bs=0,da=0,hra=0,ea=0;
	public void earning(double e)
	{
		bs=e;
		da=0.8*bs;
		hra=0.15*bs;
		ea=bs+da+hra;
		Scanner ob= new Scanner(System.in);
		System.out.println("enter the employee id");
		empid=ob.nextInt();
	}
}