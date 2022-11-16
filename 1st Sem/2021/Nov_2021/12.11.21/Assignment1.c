#include <stdio.h>

int main()
{
    int a,b,c,d,e;
    printf("Enter an Integer : ");
    scanf("%i",&a);
    printf("%x",a);
    b=(a&0xFF);
    c=(a&0xFF00)>>8;
    d=(a&0xFF0000)>>16;
    e=(a&0xFF000000)>>24;
    printf("\n%i\n%i\n%i\n%i",b,c,d,e);

    return 0;
}