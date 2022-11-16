#include <stdio.h>

int main()
{
    int a,b,c,d,e,f,g;
    printf("Enter An Integer : ");
    scanf("%i",&a);
    b=a&0x1;
    c=a&0x100;
    d=a&0x200;
    e=a&0x4000;
    f=a&0x400000;
    g=a&0x40000000;
    printf(" %i \n %i \n %i \n %i \n %i \n %i",b,c,d,e,f,g);

    return 0;
}