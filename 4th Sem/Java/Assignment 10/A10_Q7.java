public class A10_Q7 {
    
    public static void main(String[] args) {
        String str = "quickbrownfoxjumpsoverthelazydog";
        char result = findSecondMostFreqChar(str);
        System.out.println("The second most frequent character in the given string is: " + result);
    }
    
    public static char findSecondMostFreqChar(String str) {
        int[] charFreq = new int[256];
        
        // Count the frequency of each character in the given string
        for (int i = 0; i < str.length(); i++) {
            charFreq[str.charAt(i)]++;
        }
        
        // Find the second most frequent character in the given string
        int maxFreq = 0;
        int secondMaxFreq = 0;
        char secondMaxChar = '\0';
        
        for (int i = 0; i < charFreq.length; i++) {
            if (charFreq[i] > charFreq[maxFreq]) {
                secondMaxFreq = maxFreq;
                maxFreq = i;
            } else if (charFreq[i] > charFreq[secondMaxFreq] && charFreq[i] < charFreq[maxFreq]) {
                secondMaxFreq = i;
            }
        }
        
        secondMaxChar = (char) secondMaxFreq;
        return secondMaxChar;
    }
}
