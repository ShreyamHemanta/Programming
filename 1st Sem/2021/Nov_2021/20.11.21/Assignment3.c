#include <stdio.h>

int main()
{
    int a,b,c;
    float Total;
    printf("Enter Price of 1st Item : ");
    scanf("%d",&a);
    printf("Enter Price of 1st Item : ");
    scanf("%d",&b);
    printf("Enter Price of 1st Item : ");
    scanf("%d",&c);
    Total=a+b+c;
    if (Total>5000)
    {
        Total=Total-(30/100.0*Total);
    }
    else if (Total>3000) 
    {
        Total=Total-(20/100.0*Total);
    }
    else if (Total>2000) 
    {
        Total=Total-(10/100.0*Total);
    }
    printf("Final Price = %0.2f",Total);
    return 0;
}