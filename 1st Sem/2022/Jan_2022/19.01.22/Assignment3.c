#include<stdio.h>

int rev(int a)
{
    int x,l,m,n,o,temp;
    l=a%10;
    a=a/10;
    m=a%10;
    a=a/10;
    n=a%10;
    a=a/10;
    o=a%10;
    a=a/10;
    temp=l;
    l=o;
    o=temp;
    x=1000*o+100*m+10*n+l;
    return x;
}
int main()
{
    int a,b;
    printf("Enter A 4 Digit Number : ");
    scanf("%d",&a);
    b=rev(a);
    printf("%d",b);
    return 0;
}
