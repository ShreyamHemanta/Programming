public class A11_Q1 {
    public static void main(String[] args) {
        try {
            int[] arr = new int[5];
            arr[6] = 10; // Accessing an element outside of the array's bounds
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Caught an ArrayIndexOutOfBoundsException: " + e.getMessage());
        }
    }
}
