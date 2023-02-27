class Account {
    int acno;
    float balance;

    public Account(int a, float b) {
        acno = a;
        balance = b;
    }

    public void withdraw(int w) {
        balance -= w;
    }

    public void deposit(int d) {
        balance += d;
    }
}

class Calculate extends Account {
    int r, t;
    float si, amt;

    public Calculate(int x, int y) {
        super(x, 0);
        r = x;
        t = y;
        amt = 0;
    }

    public void compute() {
        si = (balance * r * t) / 100;
        amt = balance + si;
    }

    public void display() {
        System.out.println("Account Number: " + acno);
        System.out.println("Balance: " + balance);
        System.out.println("Interest: " + si);
        System.out.println("Amount: " + amt);
    }
}

public class A7_Q4 {
    public static void main(String[] args) {
        Calculate c = new Calculate(10, 2);
        c.deposit(10000);
        c.compute();
        c.display();
    }
}
