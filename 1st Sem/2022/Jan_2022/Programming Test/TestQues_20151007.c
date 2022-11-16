#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h,i,j,n;
    printf("Enter a 8 Digit Number : ");
    scanf("%d",&n);
    a=n%10;
    b=n/10000000;
    printf("%d",a);
    i=a;
    a=b;
    b=i;

    n=n/10;
    c=n%10;
    d=n/100;
    d=d%10;
    i=c;
    c=d;
    d=i;

    n=n/10;
    e=n%10;
    f=n/1000;
    f=f%10;
    i=e;
    e=f;
    f=i;

    n=n/10;
    g=n%10;
    h=n/10000;
    h=h%10;
    i=g;
    g=h;
    h=i;

    j=a*10000000+c*1000000+e*100000+g*10000+h*1000+f*100+d*10+b;
    printf("%d",j);
    return 0;
}