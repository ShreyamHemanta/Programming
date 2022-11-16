#include<stdio.h>

int main()
{
    int i,j;
    int a[5][5]={{1,2,3,4,5},{6,7,8,9,1},{2,3,4,5,6},{7,8,9,1,2},{3,4,5,6,7}};
    int j1=0,j2=4;
    int i1=0,i2=4;
    while(i1<i2)
    {
        for(j=j1;j<=j2;j++)
        {
            printf("%d ",a[i1][j]);
        }
        printf("\n");
        for(i=i1+1;i<=i2-1;i++)
        {
            printf("%d ",a[i][j2]);
        }
        printf("\n");
        for(j=j2;j>=j1;j--)
        {
            printf("%d ",a[i2][j]);
        }
        printf("\n");
        for(i=i2-1;i>=i1+1;i--)
        {
            printf("%d ",a[i][j1]);
        }
        printf("\n");
        j1++;
        j2--;
        i1++;
        i2--;
        printf("%d ",a[i1][j1]);
    }return 0;
}