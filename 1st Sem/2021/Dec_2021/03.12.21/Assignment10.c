#include <stdio.h>

int main()
{
    int n,i,j,count=1,t=2;
    printf("Enter A Number : ");
    scanf("%d",&n);
    for(i=1;i<n;i++) 
    {
        if (i%2==1)
        {
            count+=t;
            t+=4;
        }
        else
        {
            count++;
        }
    }
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d\t",count);
            if(i%2==1)
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        if(i%2==1)
        {
            count-=j;
        }
        else
        {
            count-=(i- 2);
        }
        printf("\n");
    }
    

    return 0;
}