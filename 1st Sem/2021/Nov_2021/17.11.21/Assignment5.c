#include <stdio.h>

int main()
{
    int a;
    printf("Enter a Year : ");
    scanf("%d",&a); 
    
    if (a%100==0)
    {
        if(a%400==0)
        {
            printf("The Year Is a Leap Year ");
        }
        else
        {
            printf("The Year Is Not A Leap Year");
        }
    }
    else
    {
        if(a%4==0)
        {
            printf("The Year Is a Leap Year ");
        }
        else
        {
            printf("The Year Is Not A Leap Year");
        }
    }
    return 0;
}