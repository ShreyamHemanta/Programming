#include <stdio.h>

int main()
{
    int a=1;
    while (a<90)
    {
        if (a%11==0)
        {
            printf("%d\n",a);
        }
        a=a+1;
    }

    return 0;
}