#include<stdio.h>

int main()
{
    int i,j,m,n,count;
    printf("Enter Number Of Rows : ");
    scanf("%d",&m);
    printf("\nEnter Number Of Columns : ");
    scanf("%d",&n);
    printf("\n");
    int a[m][n];
    count=1;
    for(j=(m-1);j>=0;j--)
    {
        for(i=0;i<n;i++)
        {
            a[i][j]=count;
            count++;
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }return 0;
}