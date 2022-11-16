#include<stdio.h>

int main()
{
    int i,j,n,a[8],b[8],temp;
    printf("Enter 8 Numbers : \n");
    for(i=0;i<=7;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    for(i=0,j=7;i<4;i++,j--)
    {
        temp=a[j];
        a[j]=a[i];
        a[i]=temp;
        printf("%d ",a[i]);
    }
    for(i=4,j=3;i<8;i++,j--)
    {
        temp=b[j];
        b[j]=a[i];
        printf("%d ",a[i]);
    }
    return 0;
}