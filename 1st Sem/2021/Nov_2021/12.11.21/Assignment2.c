#include <stdio.h>

int main()
{
    int a,b,c,d,e,f;
    printf("Enter an Integer : ");
    scanf("%i",&a);
    printf("%x",a);
    b=(a&0xFF);
    c=(a&0xFF00)<<8;
    d=(a&0xFF0000)>>8;
    e=(a&0xFF000000);
    f=b|c|d|e;
    printf("\n %i",f);

    return 0;
}