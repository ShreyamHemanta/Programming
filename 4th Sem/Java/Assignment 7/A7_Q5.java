class account {
    int acc_no;
    double balance;

    public account(int acc_no, double balance) {
        this.acc_no = acc_no;
        this.balance = balance;
    }

    public void disp() {
        System.out.println("account number: " + acc_no);
        System.out.println("Balance: " + balance);
    }
}

class person extends account {
    String name;
    String aadhaar_no;

    public person(int acc_no, double balance, String name, String aadhaar_no) {
        super(acc_no, balance);
        this.name = name;
        this.aadhaar_no = aadhaar_no;
    }

    public void disp() {
        System.out.println("Name: " + name);
        System.out.println("Aadhaar number: " + aadhaar_no);
        super.disp();
    }
}

public class A7_Q5 {
    public static void main(String[] args) {
        person[] persons = new person[5];

        persons[0] = new person(1001, 10000.0, "John", "1234-5678-9012");
        persons[1] = new person(1002, 5000.0, "Jane", "3456-7890-1234");
        persons[2] = new person(1003, 20000.0, "Bob", "5678-9012-3456");
        persons[3] = new person(1004, 15000.0, "Alice", "7890-1234-5678");
        persons[4] = new person(1005, 8000.0, "Charlie", "9012-3456-7890");

        for (person person : persons) {
            person.disp();
            System.out.println();
        }
    }
}