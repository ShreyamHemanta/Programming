#include <stdio.h>

int main()
{
    int n,a;

    printf("Enter A Number : ");
    scanf("%d",&n);
    do
        {
        a=n%10;
        n=n/10;
        printf("%d",a);
        }
        while(n>0);
    return 0;
}