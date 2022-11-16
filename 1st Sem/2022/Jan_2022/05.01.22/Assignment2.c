#include<stdio.h>

int main()
{
    int i,j,k,l;
    int a[6][6]={{1,2,3,4,5,6},{7,8,9,1,2,3},{4,5,6,7,8,9},{1,2,3,4,5,6},{7,8,9,1,2,3},{4,5,6,7,8,9}};
    int b[3][3],c[3][3],d[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            b[i][j]=a[i][j];
        }

    }
    for(i=3,k=0;i<6,k<3;i++,k++)
    {
        for(j=3,l=0;j<6,l<6;j++,l++)
        {
            c[k][l]=a[i][j];
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
        {
            d[i][j]=0;
            for(k=0;k<4;k++)
            {
                d[i][j]+=(b[i][k]*c[k][j]);
            }
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",d[i][j]);
        }
    printf("\n");
    }
    return 0;
}