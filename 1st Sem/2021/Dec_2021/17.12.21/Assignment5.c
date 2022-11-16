#include<stdio.h>

int main()
{
    int i,j,k,l,n=4;
    int a[4][4]={{1,2,3,4},{5,6,7,8},{9,1,2,3},{4,5,6,7}};
    
    printf("\nInverted Triangle :\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<(n-i);j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("\nUpright Triangle :\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<(n-i-1);j++)
        {
            printf("  ");
        }
        for(j=(n-i-1);j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
return 0;
}