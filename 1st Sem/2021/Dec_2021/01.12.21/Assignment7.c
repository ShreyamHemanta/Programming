#include <stdio.h>

int main()
{
    int n,a,b,c,d,e,f;
    printf("1.Monday\n2.Tuesday\n3.Wednesday\n4.Thursday\n5.Friday\n2.Saturday\n7.Sunday");
    printf("\nEnter 1st Day of December Number : ");
    scanf("%d",&n);
    printf("\n\t\t\tDECEMBER\n\n");
    printf("\tMon\tTue\tWed\tThu\tFri\tSat\tSun\n");
    for (;n<=31;n++)
    {
        if (n<=7)
        {
            switch(n)
                {
                    case 2:printf("\t");break;
                    case 3:printf("\t\t");break;
                    case 4:printf("\t\t\t");break;
                    case 5:printf("\t\t\t\t");break;
                    case 6:printf("\t\t\t\t\t");break;
                    case 7:printf("\t\t\t\t\t\t");break;
                }
            for (a=1;a<=(8-n);a++)
            {
                printf("\t%d ",a);
            }
        }
        printf("\n");
        if (n<=14)
        {
            for (b=a;b<=(15-n);b++)
            {
                printf("\t%d ",b);
            }
        }
        printf("\n");
        if (n<=21)
        {
            for (c=b;c<=(22-n);c++)
            {
                printf("\t%d ",c);
            }
        }
        printf("\n");
        if (n<=28)
        {
            for (d=c;d<=(29-n);d++)
            {
                printf("\t%d ",d);
            }
        }
        printf("\n");
        if (n<=28)
        {
            for (e=d;e<=(32-n);e++)
            {
                printf("\t%d ",e);
            }
        }
        break;
    }

    return 0;
}