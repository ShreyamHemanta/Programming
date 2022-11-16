#include<stdio.h>

int main()
{
    int a,n,m;
    printf("Enter 1st Number : ");
    scanf("%d",&n);
    printf("Enter 2nd Number : ");
    scanf("%d",&m);
    for (n;n<m;n++)
    {
        if ((n%3==0)&&(n%4==0)&&(n%6==0))
        {
            printf("%d\n",n);
        }
    }

    return 0;
}