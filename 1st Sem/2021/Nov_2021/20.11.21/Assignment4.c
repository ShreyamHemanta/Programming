#include <stdio.h>

int main()
{
    int d,m,y,t;
    printf("Enter Date : \n");
    scanf("%d%d%d",&d,&m,&y);
    if (m==1)
    {
        t=d;
    }
    else if (m==2)
    {
        t=31+d;
    }
    else if (m==3)
    {
        t=31 + 28+d;
    }
    else if (m==4)
    {
        t=31 + 28 + 31 + d;
    }
    else if (m==5)
    {
        t=31 + 28 + 31 + 30 + d;
    }
    else if (m==6)
    {
        t=31 + 28 + 31 + 30 + 31 + d;
    }
    else if (m==7)
    {
        t= 31 + 28 + 31 + 30 + 31 + 30 + d;
    }
    else if (m==8)
    {
        t=31 + 28 + 31 + 30 + 31 + 30 + 31 + d;
    }
    else if (m==9)
    {
        t=31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + d;
    }
    else if (m==10)
    {
        t=31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + d;
    }
    else if (m==11)
    {
        t=31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + d;
    }
    else if (m==12)
    {
        t=31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + d;
    }
    
    printf("Total days = %d",t);

    return 0;
}