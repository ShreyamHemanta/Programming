public class A10_Q6 {
    public static String longestPalindrome(String s) {
        int n = s.length();
        boolean[][] dp = new boolean[n][n];
        String longest = "";
        
       
        for (int i = 0; i < n; i++) {
            dp[i][i] = true;
            longest = s.substring(i, i+1);
        }
        
       
        for (int i = 0; i < n-1; i++) {
            if (s.charAt(i) == s.charAt(i+1)) {
                dp[i][i+1] = true;
                longest = s.substring(i, i+2);
            }
        }
        
   
        for (int len = 3; len <= n; len++) {
            for (int i = 0; i < n-len+1; i++) {
                int j = i + len - 1;
                if (s.charAt(i) == s.charAt(j) && dp[i+1][j-1]) {
                    dp[i][j] = true;
                    longest = s.substring(i, j+1);
                }
            }
        }
        
        return longest;
    }
    
    public static void main(String[] args) {
        String s = "babad";
        System.out.println(longestPalindrome(s)); // prints "bab" or "aba"
    }
}