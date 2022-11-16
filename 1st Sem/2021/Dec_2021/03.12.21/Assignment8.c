#include <stdio.h>

int main()
{
    int n,i,j;
    printf("Enter A Number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++) //Upward Triangle
    {
        for(j=1;j<=(n-i);j++) 
        {
            printf(" ");
        }
        for(j=1;(j<=i);j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=1;i<=n;i++) //Downward Triangle
    {
        for(j=1;j<=i;j++) 
        {
            printf(" ");
        }
        for(j=1;(j<=(n-i));j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}