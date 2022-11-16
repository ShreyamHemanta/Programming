#include<stdio.h>

int dis(int n)
{
    if(n>0)
    {
        printf("%d ",n);
        return dis(n-1);
    }
}

int main()
{
    int a;
    a=dis(10);
    return 0;
}