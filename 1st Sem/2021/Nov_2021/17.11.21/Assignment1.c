#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter 1st Number : ");
    scanf("%d",&a);
    printf("Enter 1st Number : ");
    scanf("%d",&b);
    if (a>b)
    {
    printf("The Greatest Number is : %d",a);
    }
    else
    {
    printf("The Greatest Number is : %d",b);
    }
    return 0;
}