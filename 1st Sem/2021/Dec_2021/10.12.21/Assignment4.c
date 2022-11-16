#include<stdio.h>

int main()
{
    int i,j,n,a[8],b[8],c[8],temp;
    printf("Enter 8 Numbers : \n");
    for(i=0;i<=7;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    for(i=4,j=7;i<=7;i++,j--)
    {
        temp=a[i];
        c[j]=temp;
        printf("%d ",c[j]);
    }
    for(i=0,j=3;i<=3;i++,j--)
    {
        temp=b[j];
        c[i]=temp;
        printf("%d ",c[i]);
    }
    return 0;
}