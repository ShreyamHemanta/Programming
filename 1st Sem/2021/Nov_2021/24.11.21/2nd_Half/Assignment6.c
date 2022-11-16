#include <stdio.h>

int main()
{
    int c,mul=1;
    printf("Enter A Number : ");
    scanf("%d",&c);
    while (c>=1)
    {
        mul=mul*c;
        c=c-1;
    }
    printf("The Product Is : %d",mul);

    return 0;
}