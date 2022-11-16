#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter 1st Number: ");
    scanf("%d",&a);
    printf("\nEnter 2nd Number: ");
    scanf("%d",&b);
    printf("\nEnter 3rd Number: ");
    scanf("%d",&c);
    
    (a<b)&&(a<c)?
    printf("\nThe Minimum Is The 1st Number: %d",a):
    (b<c)?
    printf("\nThe Minimum Number Is The 2nd Number :%d",b):
    printf("\nThe Minimum Number Is The 3rd Number :%d",c);
    
    
    
    return 0;
}