package A10_Q2;
import java.util.*;

import A10_Q2.General.Employee;
import A10_Q2.Marketing.Sales;

public class Main {
	public static void main(String args[]) {
		Employee e= new Employee();
		Sales s= new Sales();

		double tot=0,bs=0;
		Scanner ob= new Scanner(System.in);
		System.out.println("Enter the basic salary of the employee");
		bs=ob.nextDouble();
		e.earning(bs);
		s.tallowance(bs);
		tot=e.ea+s.ta;
		System.out.println("Salary:"+tot);
	}
}
