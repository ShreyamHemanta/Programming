#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter 1st Number : ");
    scanf("%d",&a);
    printf("Enter 1st Number : ");
    scanf("%d",&b);
    printf("Enter 1st Number : ");
    scanf("%d",&c);
    if (a>b)
    {
        if (b>c)
        {
            printf("The Smallest Number is : %d",c);
        }
        else
        {
            printf("The Smallest Number is : %d",b);
        }
    }
    
    else
    {
        if (a>c)
        {
            printf("The Smallest Number is : %d",c);
        }
        else
        {
            printf("The Smallest Number is : %d",a);
        }
    }
    

    return 0;
}