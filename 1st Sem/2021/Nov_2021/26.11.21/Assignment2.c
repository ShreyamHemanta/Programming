#include <stdio.h>

int main()
{
    int a=1,b;
    printf("Enter Number : ");
    scanf("%d",&b);
    while (b>0)
    {
        printf("%d %d ",a,b);
        a=a+ 1;
        b=b- 1;
    }

    return 0;
}