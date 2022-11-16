#include<stdio.h>

void dis(int n)
{
    int a;
    if(n==0)
    {
        return;
    }
    a=n%10;
    printf("%d ",a);
    dis(n=n/10);
}

int main()
{
    int n,a;
    printf("Enter a Number : ");
    scanf("%d",&n);
    dis(n);
    return 0;
}