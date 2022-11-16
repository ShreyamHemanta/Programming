//Check if a number is even or odd using XOR Operator

#include <stdio.h>

int main()
{
    int a;
    printf("Enter a Number : ");
    scanf("%d",&a);
    if ((a^1)==(a+1))
    {
        printf("The Number is an Even Number ");
    }
    else
    {
        printf("The Number is an Odd Number ");
    }
    return 0;
}