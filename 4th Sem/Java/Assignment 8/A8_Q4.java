import java.util.*;

interface Employee {
    double earnings(double basic);
    double deductions(double basic);
    double bonus(double basic);
}

class Manager implements Employee {
    @Override
    public double earnings(double basic) {
        return basic + 0.8 * basic + 0.15 * basic;
    }

    @Override
    public double deductions(double basic) {
        return 0.12 * basic;
    }
}

class Substaff extends Manager {
    @Override
    public double bonus(double basic) {
        return 0.5 * basic;
    }
}

public class A8_Q4 {
    public static void main(String[] args) {
        double basic = 10000.0;

        Employee manager = new Manager();
        double managerEarnings = manager.earnings(basic);
        double managerDeductions = manager.deductions(basic);
        System.out.println("Manager earnings: " + managerEarnings);
        System.out.println("Manager deductions: " + managerDeductions);

        Employee substaff = new Substaff();
        double substaffEarnings = substaff.earnings(basic);
        double substaffDeductions = substaff.deductions(basic);
        double substaffBonus = substaff.bonus(basic);
        System.out.println("Substaff earnings: " + substaffEarnings);
        System.out.println("Substaff deductions: " + substaffDeductions);
        System.out.println("Substaff bonus: " + substaffBonus);
    }
}