#include <stdio.h>

int main()
{
    float a,b,c,d;
    printf("1st Number:");
    scanf("%f",&a);
    printf("2nd Number:");
    scanf("%f",&b);
    printf("3rd Number:");
    scanf("%f",&c);
    d=(a+b+c)/3.0;
    printf("Average = %f",d);
    

    return 0;
}