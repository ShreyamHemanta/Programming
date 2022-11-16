#include<stdio.h>

int main()
{
    int i,j,k,l;
    int a[4][4]={{1,2,3,4},{5,6,7,8}};
    for(i=2,k=0;i<4,k<2;i++,k++)
    {
        for(j=0,l=0;j<2,l<2;j++,l++)
        {
            a[i][j]=a[k][l]+a[k][l+2];
        }
    }
    for(i=2,k=0;i<4,k<2;i++,k++)
    {
        for(j=2,l=0;j<4,l<2;j++,l++)
        {
            a[i][j]=a[k][l]-a[k][l+2];
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