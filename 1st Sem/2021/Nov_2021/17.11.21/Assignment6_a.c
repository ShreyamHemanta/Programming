#include <stdio.h>

int main()
{
    float a,b;
    printf("Enter 1st Time In 24 Hours : ");
    scanf("%f",&a); 
    printf("Enter 1st Time In 24 Hours : ");
    scanf("%f",&b);
    if (a>b)
    {
        printf("The Earlier Time Is %0.2f",b);
    }
    else
    {
        printf("The Earlier Time Is %0.2f",a);
    }
    
    return 0;
}