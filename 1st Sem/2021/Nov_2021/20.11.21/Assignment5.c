#include <stdio.h>

int main()
{
    int a,b,c;
    float Total,Total1,Total2;
    printf("Enter Price of 1st Item : ");
    scanf("%d",&a);
    printf("Enter Price of 1st Item : ");
    scanf("%d",&b);
    printf("Enter Price of 1st Item : ");
    scanf("%d",&c);
    Total=a+b+c;
    if (a>20000||b>20000||c>20000)
    {
        Total1=Total-(10/100*Total);
    }
    if (Total>75000)
    {
        Total=Total-(30/100.0*Total);
    }
    Total2=Total1+Total;
    printf("Final Price = %0.2f",Total2);
    return 0;
}