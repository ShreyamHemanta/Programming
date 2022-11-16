#include <stdio.h>

int main()
{
    float a;
    int b,c;
    printf("Enter a Real Number : ");
    scanf("%f",&a); // 3 digits before as well as after decimal
    b=a;
    printf("%d",b);
    c=(a-b)*1000;
    printf("\n%d",c);
    if (b==c)
    {
        printf("\nThe Integer and Decimal Parts of the Number are Equal");
    }
    else
    {
        printf("\nThe Integer and Decimal Parts of the Number are not Equal");
    }
    return 0;
}