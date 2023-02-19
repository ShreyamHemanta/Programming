#include <stdio.h>

void sum()
{
    int e=0,o=0,n;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        if(i%2==0)
        {
            e=e+i;
        }
        else
        {
            o=o+i;
        }
    }
    printf("The sum of even numbers is %d",e);
    printf("\nThe sum of odd numbers is %d",o);
}

int main()
{
    sum();
    return 0;
}