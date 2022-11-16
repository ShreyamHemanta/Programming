#include<stdio.h>

int rev(int *x,int *y,int *z)
{
    int i,j,temp;
    printf("The New Array storing Values in Old Array is :\n");
    for(i=0;i<8;i++)
    {
        z[i]=x[i];
        printf("%d ",z[i]);
    }

    printf("\n");
    for(i=0,j=7;i<8,j>=0;i++,j--)
    {
        y[j]=x[i];
    }
    printf("The Reverse of the Old Array is :\n");
    for(i=0;i<8;i++)
    {
        x[i]=y[i];
        printf("%d ",x[i]);
    }
}

int main()
{
    int a[8],b[8],c[8],t;
    printf("Enter The Elements :\n");
    for(int i=0;i<8;i++)
    {
        scanf("%d",&a[i]);
    }
    t=rev(&a[0],&b[0],&c[0]);
    printf("%d",t);
    return 0;
}





