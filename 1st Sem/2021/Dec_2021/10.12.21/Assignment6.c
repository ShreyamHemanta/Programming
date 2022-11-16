#include<stdio.h>

int main()
{
    int i,j,n,a[8],b[8],c[8],temp;
    printf("Enter 8 Numbers : \n");
    for(i=0;i<=7;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=7;i++)
    {
        a[i]=a[(i-1)]+a[i];
        printf("%d ",a[i]);
    }
    return 0;
}