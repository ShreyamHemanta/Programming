#include<stdio.h>
int main()
{
    int i,j,n,a[8],b[8],k,temp;
    printf("Enter 8 Numbers : \n");
    for(i=0;i<=7;i++)
    {
        scanf("%d",&a[i]);
    }
    for(k=0,j=6;k<j;k=k+2,j=j-2)
    {
        temp=a[k];
        a[k]=a[j];
        a[j]=temp;
    }
    for(k=1,j=7;k<j;k=k+2,j=j-2)
    {
        temp=a[k];
        a[k]=a[j];
        a[j]=temp;
    }
    for(i=0;i<8;i++)
    {
        printf("%d ",a[i]);
    }
}