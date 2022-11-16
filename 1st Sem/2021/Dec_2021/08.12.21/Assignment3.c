#include <stdio.h>

int main()
{
    int i=1,j,n,b;
    printf("Enter A Number : ");
    scanf("%d",&n);
    ab:
        j=1;
        xy:
            b=1;
            printf("%d ",b);
            j++;
            if(j<=i)
            {
                goto xy;
            }
            printf("\n");
        i++;
        if(i<=n)
            goto ab;
    return 0;
}