#include <stdio.h>

int main()
{
    int d,m,y,l=0,v=0;
    printf("Enter Date : \n");
    scanf("%d%d%d",&d,&m,&y);
    if (m==2)
    {
        if((y%4==0)||((y%4==0)&&(y%100!=0)))
        {
            l=1;
        }
    }
    switch(m)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        {
            if(d<=31)
            {
                v=1;
            }break;
        }
        case 4:
        case 6:
        case 9:
        case 11:
        {
            if(d<=30)
            {
                v=1;
            }break;
        }
        case 2:
        {
            if (l==1 && d<=29)
            {
                v=1;
            }
            else if (l==0 && d<=28)
            {
                v=1;
            }
        }
    }
    if (v==1)
    {
        printf("Valid Date");
    }
    else
    {
        printf("Invalid Date");
    }

    return 0;
}