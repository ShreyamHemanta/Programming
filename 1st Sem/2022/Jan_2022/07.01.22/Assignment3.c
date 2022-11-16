#include<stdio.h>

int main()
{
    int a,b,c,temp;
    int *x=&a,*y=&b,*z=&c;
    printf("Enter 1st Integer , a = ");
    scanf("%d",&a);
    printf("Enter 2nd Integer , b = ");
    scanf("%d",&b);
    printf("Enter 2nd Integer , c = ");
    scanf("%d",&c);
    if(a<b && a<c)
    {
        printf("The Smallest Number is a = %d",a);
    }
    else
    {
        if(b<c)
        {
            printf("The Smallest Number is b = %d",b);
        }
        else
        {
            printf("The Smallest Number is c = %d",c);
        }
    }
    return 0;
}
