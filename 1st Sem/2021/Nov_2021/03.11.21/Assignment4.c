#include <stdio.h>

int main()
{
    int x,a,b;
    printf("Enter a 5 digit number: ");
    scanf("%d",&x);
    a=x/100;
    a=a%10;
    printf("The Middle Digit is : %d",a);
    b=x/10;
    b=b%1000;
    printf("\nThe Middle Three Digits Are : %d",b);
    

    return 0;
}