class LessBalanceException extends Exception {
    public LessBalanceException(String message) {
        super(message);
    }
}

class Account {
    private int balance;
    private final int MIN_BALANCE = 500;

    public Account() {
        balance = MIN_BALANCE;
    }

    public void deposit(int amount) {
        balance += amount;
    }

    public void withdraw(int amount) throws LessBalanceException {
        if (balance - amount < MIN_BALANCE) {
            throw new LessBalanceException("Withdraw amount is not valid");
        }
        balance -= amount;
    }

    public void displayBalance() {
        System.out.println("Balance: " + balance);
    }
}

public class A11_Q6 {
    public static void main(String[] args) {
        Account account = new Account();
        account.displayBalance();
        account.deposit(1000);
        account.displayBalance();
        try {
            account.withdraw(500);
            account.displayBalance();
            account.withdraw(1000);
            account.displayBalance();
        } catch (LessBalanceException e) {
            System.out.println(e.getMessage());
        }
    }
}
