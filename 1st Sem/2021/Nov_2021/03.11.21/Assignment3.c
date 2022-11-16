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
    s=a+b+c;
    printf("%d\n%d\n%d\n%d \nThe Sum of the Digits is : %d",a,b,c,x,s);

    return 0;
}