#include<stdio.h>

int rev(int x)
{
    int a,b,c,d,e,f;
    a=x%10;
    x=x/10;
    b=x%10;
    x=x/10;
    c=x%10;
    x=x/10;
    d=x%10;
    x=x/10;
    e=x%10;
    x=x/10;
    f=x+10*e+100*d+1000*c+10000*b+100000*a;
    return f;
}

int main()
{
    int n,m;
    printf("Enter a 6 Digit Number : \n");
    scanf("%d",&n);
    m=rev(n);
    printf("%d",m);
    return 0;
}