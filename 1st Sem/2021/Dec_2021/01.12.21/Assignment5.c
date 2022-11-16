#include<stdio.h>

int main()
{
    int a=0,b=1,c,n,count;
    printf("Enter Number Of Digits To Print : ");
    scanf("%d",&n);
    for (count=0;count<=n;count++)
    {
        c=b+a;
        a=b;
        b=c;
        printf("%d ",c);
    }
    

    return 0;
}