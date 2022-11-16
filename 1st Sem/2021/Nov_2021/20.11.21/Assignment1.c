#include <stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h,i;
    printf("Enter 1st Number : ");
    scanf("%d",&a);
    printf("Enter 2nd Number : ");
    scanf("%d",&b);
    printf("Enter 3rd Number : ");
    scanf("%d",&c);
    d=(a>b)&&(a<c);
    e=(a<b)&&(a>c);
    f=(b>a)&&(b<c);
    g=(b<a)&&(b>c);
    h=(c>a)&&(c<b);
    i=(c<a)&&(c>b);
    if (d||e)
    {
        printf("The 1st Number is the 2nd Largest ");
    }
    
    else if (f||g)
    {
        printf("The 2nd Number is the 2nd Largest ");
    }
    
    else if (h||i)
    {
        printf("The 3rd Number is the 2nd Largest ");
    }

    return 0;
}