import java.util.Scanner;

public class A11_Q3 {

    public static void main(String[] args) {
        A11_Q3 obj = new A11_Q3();
        obj.ProcessInput();
    }

    public void ProcessInput() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = sc.nextInt();
        sc.close();
        try {
            if (num < 0) {
                throw new NegativeNumberException("The number is negative");
            } else {
                System.out.println("The double value of the number is: " + ((double) num));
            }
        } catch (NegativeNumberException e) {
            System.out.println(e.getMessage());
        }
    }
}

class NegativeNumberException extends Exception {
    public NegativeNumberException(String message) {
        super(message);
    }
}
