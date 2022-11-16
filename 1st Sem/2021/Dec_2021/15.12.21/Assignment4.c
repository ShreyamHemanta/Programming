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
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            a[i][j]=count;
            printf("%d ",a[i][j]);
            count++;
        }
        printf("\n");
    }return 0;
}