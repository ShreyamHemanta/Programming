#include<stdio.h>

int fac(int n)
{
    int mul=1;
    if(n%2==0)
    {
        for(;n>0;n--)
        {
            mul=mul*n;
        }
        return mul;
    }
    else
    {
        return -1;    
    }
}

int main()
{
    int n,a;
    printf("Enter The Number :\n");
    scanf("%d",&n);
    a=fac(n);
    printf("The Final Result is : %d",a);
    return 0;
}