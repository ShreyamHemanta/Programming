#include <stdio.h>

int main()
{
    int a,b,c,d,e;
    printf("Enter 1st Number: ");
    scanf("%d",&a);
    printf("Enter 2nd Number: ");
    scanf("%d",&b);
    printf("Enter 3rd Number: ");
    scanf("%d",&c);
    
    d=(a>b)&&(a<c);
    e=(a<b)&&(a>c);
    (d||e)?
    printf("The 2nd Largest Number is The 1st Number : %d",a):
    (b<c)?
    printf("The 2nd Largest Number is The 2nd Number : %d",b):
    printf("The 2nd Largest Number is The 3rd Number : %d",c);
    
    
    return 0;
}