#include<stdio.h>

int dis(int n)
{
    if(n<11)
    {
        printf("%d ",n);
        return dis(n+1);
    }
}

int main()
{
    int a;
    a=dis(1);
    return 0;
}