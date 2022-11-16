#include <stdio.h>

int main()
{
    char x,y,m,f;
    int a,b,c,d;
    printf("Enter an 1st Character : ");
    scanf("%c",&x);
    printf("%i",x);
    scanf("%c",&m);
    printf("\nEnter an 2nd Character : ");
    scanf("%c",&y);
    printf("%i",y);
    a=(x&0xF0)>>4;
    b=(x&0xF)<<8;
    c=(y&0xF)<<4;
    d=(y&0xF0)<<8;
    f=a|b|c|d;
    printf("\nThe New Character is %c (%i)",f,f);

    return 0;
}