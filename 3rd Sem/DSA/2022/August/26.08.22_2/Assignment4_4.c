#include <stdio.h>

void add()
{
    int n,sum=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("The sum of the Numbers is : %d",sum);
}

int main()
{
    add();
    return 0;
}