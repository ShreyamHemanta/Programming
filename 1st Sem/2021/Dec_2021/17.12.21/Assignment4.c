#include<stdio.h>

int main()
{
    int i,j,k,l;
    int a[4][4]={{1,2,3,4},{5,6,7,8},{9,1,2,3},{4,5,6,7}};
    int b[4][4];
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            b[i][j]=a[i][j];
        }
    }
    for(i=0,k=2;i<2,k<4;i++,k++)
    {
        for(j=0,l=2;j<2,l<4;j++,l++)
        {
           a[i][j]=b[k][l] ;
        }
    }
    for(i=0,k=2;i<2,k<4;i++,k++)
    {
        for(j=0,l=2;j<2,l<4;j++,l++)
        {
            a[k][l]=b[i][j];
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}