#include<stdio.h>

int main()
{
    int i,j,c[3][3];
    int a[3][3]={{0,1,2},{3,4,5},{6,7,8}};
    int b[3][3]={{1,2,3},{4,5,6,},{7,8,9}};
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",c[i][j]);
        }
    printf("\n");
    }return 0;
}