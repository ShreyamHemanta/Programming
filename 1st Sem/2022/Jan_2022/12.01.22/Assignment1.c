#include<stdio.h>

int main()
{
    int a[5]={1,2,3,4,5};
    int i,j;
    printf("Forward : \n");
    for(i=0;i<5;i++)
    {
        printf("%d",*(a+i));
    }
    printf("\nReverse : \n");
    for(j=i-1;j>=0;j--)
    {
        printf("%d",*(a+j));
    }
    return 0;
}