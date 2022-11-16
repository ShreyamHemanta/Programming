#include <stdio.h>

int main()
{
    int n,a=2,sum=0;
    printf("Enter A Number : ");
    scanf("%d",&n);
    
    while (a<=n)
    {
        sum=sum+(((a-1)+(a+1))/a);
        printf("%d/%d + %d/%d + ",(a- 1),a,(a+ 1),a);
        a=a+2;
    }
    printf("\b\b = %d",sum);
    return 0;
}