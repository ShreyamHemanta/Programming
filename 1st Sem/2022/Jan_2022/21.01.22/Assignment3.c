#include<stdio.h>

void sum(int n)
{
    int t=0;
    if(n!=0||n!=1)
    {
        return ;
    }
    return t+=sum(n-2);
}

int main()
{
    int n,a;
    printf("Enter a Number : ");
    scanf("%d",&n);
    a=sum(n);
    printf("%d",a);
    return 0;
}