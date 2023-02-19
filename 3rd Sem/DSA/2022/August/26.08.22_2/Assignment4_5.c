#include <stdio.h>

void fact()
{
    int n,mul=1;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        mul=mul*i;
    }
    printf("The factorial of the Numbers is : %d",mul);
}

int main()
{
    fact();
    return 0;
}