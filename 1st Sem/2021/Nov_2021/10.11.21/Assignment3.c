#include <stdio.h>

int main()
{
    int a,b,c,d,e,f;
    printf("Enter 1st Number: ");
    scanf("%d",&a);
    printf("Enter 2nd Number: ");
    scanf("%d",&b);
    printf("Enter 3rd Number: ");
    scanf("%d",&c);
    printf("Enter 4th Number: ");
    scanf("%d",&d);
    printf("Enter 5th Number: ");
    scanf("%d",&e);
    printf("Enter 6th Number: ");
    scanf("%d",&f);
    
    (a>b)&&(a>c)&&(a>d)&&(a>e)&&(a>f)?
    printf("\nThe Maximum Is The 1st Number: %d",a):
    (b>c)&&(b>d)&&(b>e)&&(b>f)?
    printf("\nThe Maximum Number Is The 2nd Number : %d",b):
    (c>d)&&(c>e)&&(c>f)?
    printf("\nThe Maximum Number Is The 3rd Number : %d",c):
    (d>e)&&(d>f)?
    printf("\nThe Maximum Number Is The 4th Number : %d",d):
    (e>f)?
    printf("\nThe Maximum Number Is The 5th Number : %d",e):
    printf("\nThe Maximum Number Is The 6th Number : %d",f);
    
    return 0;
}