#include <stdio.h>

int main()
{
    int x,a,b,c,d,s;
    printf("Enter a 4 digit number: ");
    scanf("%d",&x);
    a=x%10;
    x=x/10;
    b=x%10;
    x=x/10;
    c=x%10;
    x=x/10;
    d=x%10;
    x=x/10;
    s=(b+a*10+d*100+c*1000);
    printf("The New Order is :%d",s);
    

    return 0;
}