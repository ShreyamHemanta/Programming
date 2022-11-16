#include <stdio.h>

int main()
{
    float a;
    printf("Enter a Real Number : ");
    scanf("%f",&a);
    int b=a;
    float c=a-b;
    printf("Real part is : %d",b);
    printf("\nDecimal part is : %f",c);
    

    return 0;
}