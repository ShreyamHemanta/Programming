#include <stdio.h>

int main()
{
    
    int a;
    printf("Enter A Number : " );
    scanf("%d",&a);
    if (a<10)
    {
        printf("The Number Is A 1 Digit Number");
    }
    else if (a>10 && a<100)
    {
        printf("The Number Is A 2 Digit Number");
    }
    else if (a>100 && a<1000)
    {
        printf("The Number Is A 3 Digit Number");
    }
    else if (a>1000 && a<10000)
    {
        printf("The Number Is A 4 Digit Number");
    }
    else if (a>10000 && a<100000)
    {
        printf("The Number Is A 5 Digit Number");
    }
    else if (a>100000 && a<1000000)
    {
        printf("The Number Is A 6 Digit Number");
    }
    else if (a>1000000 && a<10000000)
    {
        printf("The Number Is A 7 Digit Number");
    }
    else if (a>10000000 && a<100000000)
    {
        printf("The Number Is A 8 Digit Number");
    }

    return 0;
}