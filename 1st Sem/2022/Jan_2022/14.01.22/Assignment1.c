#include<stdio.h>

int max(int x,int y)
{
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int main()
{
    int a,b,c;
    printf ("Enter 2 Numbers : \n");
    scanf("%d%d",&a,&b);
    c=max(a,b);
    printf("The Maximum Number Is %d ",c);
    return 0;
}