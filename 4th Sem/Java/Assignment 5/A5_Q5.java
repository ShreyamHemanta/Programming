import java.util.*;
public class A5_Q5
{
	public static void main(String[] args) 
	{
		Scanner ob=new Scanner(System.in);
	    System.out.println("Enter the size of the matrix.");
	    int m=ob.nextInt();
		int n=ob.nextInt();
		int a[][]=new int[m][n];
		System.out.println("Enter elements in the array.");
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				a[i][j]=ob.nextInt();
			}
		}
		int ld=0,rd=0;
		for(int i=0;i<m;i++)
		{
			
				ld+=a[i][i];
				rd+=a[i][n-1-i];
			
		}
		System.out.println("Sum of elements of the left diagonal="+ld);
		System.out.println("Sum of elements of the right diagonal="+rd);
	}
}