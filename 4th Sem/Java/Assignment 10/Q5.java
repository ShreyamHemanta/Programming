public class Q5 {
    public static void main(String[] args) {
        String str = "The quick brown fox jumps over the lazy dog";
        String searchStr = "fox";

        int lastIndex = str.lastIndexOf(searchStr);

        if(lastIndex == -1) {
            System.out.println("String not found");
        }
        else {
            System.out.println("Last index of " + searchStr + " is " + lastIndex);
        }
    }
}