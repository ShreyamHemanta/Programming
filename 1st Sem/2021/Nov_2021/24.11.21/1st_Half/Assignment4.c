#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter sides of a Triangle :\n");
    scanf("%d%d%d",&a,&b,&c);
    if (a+b>c || b+c>a || c+a>b) 
    {
        if (a==b && b==c)
        {
            printf ("The Triangle Is a Equilateral Triangle");
        }
        else if (a==b || b==c || c==a) 
        {
            printf("The Triangle Is a Isosceles Triangle");
        }
        else if (a*a+b*b==c*c || b*b+c*c==a*a || a*a+c*c==b*b)
        {
            printf("The Triangle Is a Right Triangle");
        }
        else 
        {
            printf("The Triangle Is a Scalene Triangle");
        }
    }
    else
    {
        printf("It Is Not A Triangle");
    }

    return 0;
}