import java.util.*;

class Customer {
    private int id;
    private String name;
    private double balance;

    public Customer(int id, String name, double balance) {
        this.id = id;
        this.name = name;
        this.balance = balance;
    }

    public int getId() {
        return id;
    }

    public String getName() {
        return name;
    }

    public double getBalance() {
        return balance;
    }

    public void deposit(double amount) {
        balance += amount;
    }

    public void withdraw(double amount) {
        balance -= amount;
    }

    public String toString() {
        return id + "\t" + name + "\t" + balance;
    }
}

public class A9_Q1 {
    public static void main(String[] args) {
        List<Customer> customers = new ArrayList<Customer>();
        customers.add(new Customer(1, "Ravi Sharma", 100));
        customers.add(new Customer(2, "Maya Kapoor", 500));
        customers.add(new Customer(3, "Varun Tagor", 50));
        customers.add(new Customer(4, "Touseef Khan", 400));
        customers.add(new Customer(5, "Siddharth Singh", 200));
        customers.add(new Customer(6, "Vikas Kumar", 700));
        customers.add(new Customer(7, "Pooja Yadav", 250));
        customers.add(new Customer(8, "Jyoti Verma", 600));
        customers.add(new Customer(9, "Harshita Singh", 150));
        customers.add(new Customer(10, "Riya Singh", 300));

        System.out.println("Before sorting:");
        System.out.println("ID\tName\tBalance");
        for (Customer c : customers) {
            System.out.println(c);
        }

        bubbleSort(customers);

        System.out.println("\nAfter sorting:");
        System.out.println("ID\tName\tBalance");
        for (Customer c : customers) {
            System.out.println(c);
        }

        Customer c4 = findCustomerById(customers, 4);
        System.out.println("\nBefore transaction:");
        System.out.println(c4);
        c4.withdraw(100);
        System.out.println("\nAfter transaction:");
        System.out.println(c4);
    }

    private static void bubbleSort(List<Customer> customers) {
        int n = customers.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (customers.get(j).getId() > customers.get(j + 1).getId()) {
                    Customer temp = customers.get(j);
                    customers.set(j, customers.get(j + 1));
                    customers.set(j + 1, temp);
                }
            }
        }
    }

    private static Customer findCustomerById(List<Customer> customers, int id) {
        for (Customer c : customers) {
            if (c.getId() == id) {
                return c;
            }
        }
        return null;
    }
}