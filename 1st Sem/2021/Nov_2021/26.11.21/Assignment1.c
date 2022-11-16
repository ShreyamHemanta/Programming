#include <stdio.h>

int main()
{
    int a=1,b;
    printf("Enter Number : ");
    scanf("%d",&b);
    while (a<=b)
    {
        printf("%d OK ",a);
        a=a+ 1;
    }

    return 0;
}