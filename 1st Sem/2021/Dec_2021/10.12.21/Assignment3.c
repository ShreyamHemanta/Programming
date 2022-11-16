#include<stdio.h>

int main()
{
    int i,j,n,a[8],b[8],temp;
    printf("Enter 8 Numbers : \n");
    for(i=0;i<=7;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0,j=7;i<=7;i++,j--)
    {
        temp=a[j];
        b[i]=temp;
        printf("%d ",b[i]);
    }
    return 0;
}