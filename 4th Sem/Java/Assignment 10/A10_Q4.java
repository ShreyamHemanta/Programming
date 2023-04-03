public class A10_Q4 {
    public static void main(String[] args) {
        String alphabet = "abcdefghijklmnopqrstuvwxyz";
        for (int i = 0; i < alphabet.length(); i++) {
            char c = alphabet.charAt(i);
            int index = c - 'a' + 1;
            System.out.println(c + " has index " + index);
        }
    }
}