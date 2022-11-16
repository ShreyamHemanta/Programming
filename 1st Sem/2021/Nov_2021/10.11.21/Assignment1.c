#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter 1st Number: ");
    scanf("%d",&a);
    printf("\nEnter 2nd Number: ");
    scanf("%d",&b);
    (a>b)?
    printf("\nThe Minimum Is The 2nd Number: %d",b):
    printf("\nThe Minimum Is The 1st Number : %d",a);
    return 0;
}