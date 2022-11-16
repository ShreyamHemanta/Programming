#include <stdio.h>

struct train
{
    char name[20];
    struct time
    {
        int hour;
        int minute;
        char a[20];
    }ti;
};

int main()
{
    int i;
    struct train t[5];

    for(i=0;i<5;i++)
    {
        printf("Enter Name of the Train %d : ",i+1);
        scanf("%s",&t[i].name);
        printf("Enter Arrival Time in Hours : ");
        scanf("%d",&t[i].ti.hour);
        printf("Enter Arrival Time in Minutes : ");
        scanf("%d",&t[i].ti.minute);
        printf("Enter AM / PM : ");
        scanf("%s",&t[i].ti.a);
        printf("\n");
    }
    for(i=0;i<5;i++)
    {
        if (t[i].ti.a[0]=='p')
        {
            t[i].ti.hour+=12;
        }
    }


    for(i=0;i<5;i++)
    {
        printf("\nDetails of Train %d\n",i+1);
        printf("Train Name : %s\n",t[i].name);
        printf("Timing in Railway Format : %d:%d\n",t[i].ti.hour,t[i].ti.minute);
        printf("\n");
    }

    return 0;
}