#include <stdio.h>

int main()
{
    int n,i,j,count;
    printf("Enter A Number : ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        count=1;
        for(j=1;j<=i;j++)
        {
            printf("%d",count);
            count++;
        }
        printf("\n");
    }

    return 0;
}