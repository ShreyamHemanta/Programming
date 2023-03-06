import java.util.*;

public class A8_Q3 {
    public static void main(String[] args) {
        int[][] a = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
        int[][] b = {{10, 11}, {12, 13}, {14, 15}};
        int[][] c = multiplyMatrices(a, b);
        printMatrix(c);
    }

    public static int[][] multiplyMatrices(int[][] a, int[][] b) {
        int m = a.length;
        int n = b[0].length;
        int[][] c = new int[m][n];

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                for (int k = 0; k < b.length; k++) {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        return c;
    }

    public static void printMatrix(int[][] matrix) {
        for (int[] row : matrix) {
            for (int element : row) {
                System.out.print(element + " ");
            }
            System.out.println();
        }
    }
}