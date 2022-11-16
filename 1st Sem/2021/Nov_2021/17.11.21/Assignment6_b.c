#include <stdio.h>

int main()
{
    int h1,h2,m1,m2;
    printf("The 1st Time : ");
    scanf("%d",&h1);
    scanf("%d",&m1);
    printf("The 2nd Time : ");
    scanf("%d",&h2);
    scanf("%d",&m2);
    if (h1>h2)
    {
        printf("The 2nd Time is Earlier ");
    }
    else
    {
        if (h1<h2)
        {
           printf("The 1st Time is Earlier"); 
        }
        else
        {
            if (m1>m2)
            {
                printf("The 2nd Time is Earlier");
            }
            else
            {
                printf("The 2nd Time is Earlier");
            }
        }
    }

    return 0;
}