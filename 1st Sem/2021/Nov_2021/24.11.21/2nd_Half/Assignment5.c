#include <stdio.h>

int main()
{
    int c;
    float b,sum=0;
    printf("Enter A Number : ");
    scanf("%d",&c);
    while (c>0)
    {
        b=(1.0/c);
        sum=sum+b;
        c=c- 2;
    }
    printf("The Sum Is : %0.4f",sum);

    return 0;
}