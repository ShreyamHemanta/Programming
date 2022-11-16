#include <stdio.h>

int main()
{
    int a=2,c;
    float b,sum=0;
    printf("Enter A Number : ");
    scanf("%d",&c);
    while (a<=c)
    {
        b=(1.0/a);
        sum=sum+b;
        a=a+ 1;
    }
    printf("The Sum Is : %0.4f",sum);

    return 0;
}