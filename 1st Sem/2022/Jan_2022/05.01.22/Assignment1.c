#include<stdio.h>

int main()
{
    int i,j,k;
    int a[2][3]={{1,2,3},{4,5,6}};
    int b[3][4]={{1,2,3,4},{5,6,7,8},{9,1,2,3}};
    int c[2][4];
    for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
        {
            c[i][j]=0;
            for(k=0;k<4;k++)
            {
                c[i][j]+=(a[i][k]*b[k][j]);
            }
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\t",c[i][j]);
        }
    printf("\n");
    }
}
