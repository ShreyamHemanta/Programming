#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter a 4 Digit Number : ");
    scanf("%d",&a);
    b=a%10;
    c=a/1000;
    if (b==c)
    {
        printf("The 1st and Last Digits of the Number are Equal");
    }
    else
    {
        printf("The 1st and Last Digits of the Number are not Equal");
    }
    return 0;
}