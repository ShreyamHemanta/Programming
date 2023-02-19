//Check if a number is even or odd using Multiplication and Division

#include <stdio.h>

int main()
{
    int a;
    printf("Enter a Number : ");
    scanf("%d",&a);
    if ((a/2)*2==a)
    {
        printf("The Number is an Even Number ");
    }
    else
    {
        printf("The Number is an Odd Number ");
    }
    return 0;
}
