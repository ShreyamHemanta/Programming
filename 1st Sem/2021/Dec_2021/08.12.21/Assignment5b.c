#include <stdio.h>

int main()
{
    int n,a;

    printf("Enter A Number : ");
    scanf("%d",&n);
    pq:
        a=n%10;
        n=n/10;
        printf("%d",a);
    if(n>0)
    {
        goto pq;
    }
    return 0;
}