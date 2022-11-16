#include<stdio.h>

int main()
{
    int n=5,i,j;
    int a[5][5]={{1,2,3,4,5},{6,7,8,9,1},{2,3,4,5,6},{7,8,9,1,2},{3,4,5,6,7}};
    for(i=n/2;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            printf("  ");
        }
        for(j=n-i-1;j<=i;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}