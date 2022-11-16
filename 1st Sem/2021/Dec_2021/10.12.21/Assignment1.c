#include<stdio.h>

int main()
{
    int i,j,n,a[5];
    printf("Enter 5 Numbers : \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=4;j>=0;j--)
    {
        printf("%d ",a[j]);
    }
    return 0;
}