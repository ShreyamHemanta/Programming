#include <stdio.h>

int main()
{
    int n,j;
    float i=2,sum=0;
    printf("Enter A Number : ");
    scanf("%d",&n);
    do
        {
        j=i;
        sum=sum+((i- 1)/i);
        printf("%d/%d + ",(j- 1),j);
        i++;
        }
        while(i<=n);
        printf("\b\b = %0.4f",sum);
    return 0;
}