#include<stdio.h>

int fac(int n)
{
    if(n==1||n==0)
    {
        return 1;
    }
    return n*fac(n-1);
}

int main()
{
    int n,a;
    printf("Enter a Number : ");
    scanf("%d",&n);
    a=fac(n);
    printf("The Factorial of the NUmber is : %d",a);
    return 0;
}