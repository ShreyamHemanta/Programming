#include <stdio.h>

int main()
{
    int a=3,b=2,c;
    printf("a=%d,b=%d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("a'=%d,b'=%d",a,b);

    return 0;
}