public class A11_Q2 {
    public static void main(String[] args) {
        A obj = new A();
        obj.method();
    }
}

class A {
    public void method() {
        try {
            int a = 10 / 0; // Causes an ArithmeticException
            System.out.println("This line will not be executed");
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Caught an ArrayIndexOutOfBoundsException: " + e.getMessage());
        } catch (ArithmeticException e) {
            System.out.println("Caught an ArithmeticException: " + e.getMessage());
        } catch (Exception e) {
            System.out.println("Caught an Exception: " + e.getMessage());
        } finally {
            System.out.println("Finally block always executes");
        }
    }
}
