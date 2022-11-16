#include <stdio.h>

int main()
{
    float a,d;
    int b,c;
    printf("Enter A Real Number: ");
    scanf("%f",&a);
    b=a*1000;
    c=b%10;
    b=b/10;
    (c>=5)?
    b=++b:b;
    d=b/100.0;
    printf("The Rounded Off Value of The Real Number upto Two Decimal Places is : %0.2f ",d);
    
    
    return 0;
}