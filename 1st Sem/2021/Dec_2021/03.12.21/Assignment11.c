#include <stdio.h>

int main()
{
    int i,j,n,count;
    printf("Enter A Number : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            if(j==0||i==0)
            {
                count=1;
            }
            else
            {
                count=count*(i-j+ 1)/j;
                printf("%d ",count);
            }
        }
        printf("\n");
    }
    return 0;
}