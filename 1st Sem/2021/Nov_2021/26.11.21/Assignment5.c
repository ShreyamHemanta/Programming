#include <stdio.h>

int main()
{
    int n,a=1,f=1;
    float sum=0;
    printf("Enter A Number : ");
    scanf("%d",&n);
    
    while (n>0)
    {
        f=1;
        int t=n;
        while (t>0)
        {
            f=f*(t--);
        }
        if (a%2==1)
        {
            sum=sum+((a*1.0)/f);
            printf("%d/%d! + ",a,n);
        }
        else
        {
            sum=sum+((f*1.0)/a);
            printf("%d!/%d + ",n,a);
        }
        a=a+1;
        n=n-1;
    }
    printf("\b\b = %f",sum);
    return 0;
}