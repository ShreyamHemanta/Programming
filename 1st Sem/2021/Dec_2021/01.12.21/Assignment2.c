#include<stdio.h>

int main()
{
    int a,n,count=0;
    printf("Enter A Number : ");
    scanf("%d",&n);
    for (;n>0;n=n/10)
    {
        a=n%10;
        count=count+ 1;
    }
    printf("Number Of Digits Is %d",count);

    return 0;
}