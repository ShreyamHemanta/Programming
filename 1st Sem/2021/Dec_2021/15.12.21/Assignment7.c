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
    for(j=(n-1);j>=0;j--)
    {
        if(j%2!=0)
        {
            for(i=(m-1);i>=0;i--)
            {
                a[i][j]=count;
                count++;
            }
        }
        else
        {
            for(i=0;i<m;i++)
            {
                a[i][j]=count;
                count++;
            }
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