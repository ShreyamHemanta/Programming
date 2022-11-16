#include <stdio.h>

int main()
{
    int n,i,j,count=1;
    printf("Enter A Number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++) 
    {
        for(j=n;j>=i;j--) 
        {
            if (i%2==1)
            {
                printf("%d\t",count);
                count++;
                
            }
            else
            {
                printf("%d\t",count);
                count--;
            }
        }
        if (i%2==1)
        {
            count+=(n-i- 1);
        }
        else
        {
            count+=(n-i+ 2);
        }
        printf("\n");
    }

    return 0;
}