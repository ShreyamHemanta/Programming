public class A11_Q5 {
    public static void main(String[] args) {
        try {
            if (args.length < 4) {
                throw new CheckArgumentException("Number of arguments should be at least 4");
            }

            int sum = 0;
            for (String arg : args) {
                int num = Integer.parseInt(arg);
                sum += num * num;
            }

            System.out.println("Sum of squares: " + sum);
        } catch (CheckArgumentException e) {
            System.out.println(e.getMessage());
        } catch (NumberFormatException e) {
            System.out.println("Invalid argument: " + e.getMessage());
        }
    }
}

class CheckArgumentException extends Exception {
    public CheckArgumentException(String message) {
        super(message);
    }
}
