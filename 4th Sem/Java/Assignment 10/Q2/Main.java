package Q2;
import java.util.*;

import Q2.General.Employee;
import Q2.Marketing.Sales;

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
