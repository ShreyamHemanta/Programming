#include <stdio.h>

int main()
{
    int a,b,c,d;
    printf("Enter 1st Number: ");
    scanf("%d",&a);
    printf("Enter 2nd Number: ");
    scanf("%d",&b);
    printf("Enter 3rd Number: ");
    scanf("%d",&c);
    printf("Enter 4th Number: ");
    scanf("%d",&d);
    
    (a<b)&&(a<c)&&(a<d)?
    printf("\nThe Minimum Is The 1st Number: %d",a):
    (b<c)&&(b<d)?
    printf("\nThe Minimum Number Is The 2nd Number : %d",b):
    (c<d)?
    printf("\nThe Minimum Number Is The 3rd Number : %d",c):
    printf("\nThe Minimum Number Is The 4th Number : %d",d);
    
    return 0;
}