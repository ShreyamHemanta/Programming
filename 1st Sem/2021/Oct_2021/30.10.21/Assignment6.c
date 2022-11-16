#include <stdio.h>

int main()
{
    int years,months,days,a,b,c;
    years=2021-2002;
    months=10-4;
    days=31-8;
    printf("%dYears%dMonths%dDays",years,months,days);
    a=("%d*365+%d*30+%d",years,months,days);
    printf("\n%d days ",a);
    b=("%d*12+%d",years,months);
    printf("\n%d months ",b);
    c=("%d",years);
    printf("\n%d months ",c);


    return 0;
}