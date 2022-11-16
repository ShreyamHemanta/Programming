#include <stdio.h>

int main()
{
    int a=1,b,c;
    printf("Enter A Number : ");
    scanf("%d",&b);
    while (a<=10)
    {
        c=b*a;
        printf("%d*%d=%d\n",b,a,c);
        a=a+ 1;
    }

    return 0;
}