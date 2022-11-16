#include <stdio.h>

int main()
{
    int n,m,a,c,b=0,d=1,e,f;
    printf("Enter A Number : ");
    scanf("%d",&n);
    n=m;
    for (;m>0;m=m/10)
    {
        a=m%10; //digits reversed
        b=b+ 1; //digits calculated
    }
    c=b%3; //finding number of remainder digits
    f=n%c; //finding remainder
    
    for (c;c>0;c--)
    {
        d=d*10; //finding 10^
    }
    e=m/d; 
    for (e;e>0;e/1000)
    {
        printf("%d,",e);
    }
    printf("%d,%d",f,e);
    

    return 0;
}