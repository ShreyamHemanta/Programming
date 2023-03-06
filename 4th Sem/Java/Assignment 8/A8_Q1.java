import java.util.*;

abstract class Student {
	int roll_no = 1234;
	int reg_no = 5678;
	abstract String course ();
}

class Kiitian extends Student {
	String course () {
		String c = "CSE" ;
		return c;
	}
	void show() {
		System.out.println("RollNo = "+roll_no);
		System.out.println("RegNo = "+reg_no);
		System.out.println("Course = "+course());
	}
}

class A8_Q1 {
	public static void main(String args[]) {
		Kiitian k = new Kiitian();
		k.course();
		k.show();
	}
}