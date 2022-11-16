#include <stdio.h>

int main()
{
    char x,y,z,u,v,g;
    int m,n,o;
    printf("Enter an 1st Character : ");
    scanf("%c",&x);
    printf("%i",x);
    scanf("%c",&u);
    printf("\nEnter an 2nd Character : ");
    scanf("%c",&y);
    printf("%i",y);
    scanf("%c",&v);
    printf("\nEnter an 3rd Character : ");
    scanf("%c",&z);
    printf("%i",z);
    
    m=((x&0xFF)<<4)|((y&0xF0)>>4);
    n=((y&0xF)<<8)|((z&0xFF));
    o=(m<<12)|(n);
    printf("\nThe 1st New Character is %c (%i)",m,m);
    printf("\nThe 1st New Character is %c (%i)",n,n);
    printf("\nThe 1st New Character is %c (%i)",o,o);

    return 0;
}