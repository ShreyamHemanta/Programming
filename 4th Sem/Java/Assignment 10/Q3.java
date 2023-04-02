import java.util.*;

public class Q3 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        // Reading the input string from user
        System.out.print("Enter a string: ");
        String str = input.nextLine();

        // Changing the case of the string
        String strUpperCase = str.toUpperCase();
        String strLowerCase = str.toLowerCase();

        // Reversing the string
        StringBuilder sb = new StringBuilder(str);
        sb.reverse();
        String strReverse = sb.toString();

        // Comparing two strings ignoring case
        System.out.print("Enter another string to compare: ");
        String str2 = input.nextLine();
        boolean equalIgnoreCase = str.equalsIgnoreCase(str2);

        // Insertion of one string into another string
        System.out.print("Enter a string to insert: ");
        String insertStr = input.nextLine();
        System.out.print("Enter the index to insert the string: ");
        int index = input.nextInt();
        String strInsert = new StringBuilder(str).insert(index, insertStr).toString();

        // Finding the length of the string
        int length = str.length();

        // Counting the number of vowels in the string
        int vowelCount = 0;
        for(int i=0; i<str.length(); i++){
            char ch = str.charAt(i);
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
               ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
                vowelCount++;
            }
        }

        // Print the results
        System.out.println("Upper Case: " + strUpperCase);
        System.out.println("Lower Case: " + strLowerCase);
        System.out.println("Reverse: " + strReverse);
        System.out.println("Equal Ignore Case: " + equalIgnoreCase);
        System.out.println("Insert String: " + strInsert);
        System.out.println("Length: " + length);
        System.out.println("Vowel Count: " + vowelCount);

        input.close();
    }
}