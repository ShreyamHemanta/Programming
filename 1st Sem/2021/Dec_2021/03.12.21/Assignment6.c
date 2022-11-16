#include <stdio.h>

int main()
{
    int n,i,j,count;
    printf("Enter A Number : ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        if (i%2==0)
        {
            count=i;
            for(j=1;j<=i;j++)
            {   
            printf("%d",count);
            count--;
            }
        }
        else
        {
            
            for(j=1;j<=i;j++)
            { 
            count=1;
            printf("%d",count);
            count++;
            }
        }
        printf("\n");
    }

    return 0;
}