#include <stdio.h>

int main()
{
    int n,a,b=2,c=1,d;
    float sum=0;
    printf("Enter A Number : ");
    scanf("%d",&n);
    while(b<=n)
    {
        a=1;
        d=b;
        while(d>0)
        {
            a=a*d;
            d=d- 1;
        }
        printf("%d/%d!+",b- 1,b);
        sum=sum+((b-1.0)/a);
        a=1;
        d=a+ 1;
        while(d>0)
        {
            a=a*d;
            d=d- 1;
        }
        printf("%d!/%d+",b+ 1,b);
        sum=sum+(a/b);
        b=b+ 2;
    }
    printf("\b=%0.3f",sum);
    
    return 0;
}