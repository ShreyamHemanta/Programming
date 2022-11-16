#include<stdio.h>


int fac(int n)
{
    int i,x=1;
    for(;n>1;n--)
    {
        x=x*n;
    }
    return x;
}
int fib(int n)
{
    int x=1,y=1,z;
    float t=1/1+fac(2)/1;
    for(int i=3;i<=n;i++)
    {
        z=x+y;
        x=y;
        y=z;
        if(i%2==1)
        {
            t=t+((z*1.0)/fac(i));
        }
        else
        {
            t=t+(fac(i)/(z*1.0));
        }
    }
    return t;
}

int main()
{
    int n;
    float tot;
    printf("Enter Number of Elements : ");
    scanf("%d",&n);
    tot=fib(n);
    printf("%0.3f",tot);
    return 0;
}