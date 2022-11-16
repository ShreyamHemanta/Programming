#include<stdio.h>
#include<stdlib.h>

void main()
{
    int n;
    printf("Enter Number of elements in the array : ");
    scanf("%d",&n);
    int *p=(int*)malloc(n*sizeof(int));

    printf("Enter the elements in the array : ");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }

    int max=0;
    int count=0;

    for (int i=0;i<n;i++)
    {
        if (p[i]>max)
        {
            count=1;
            max=p[i];
        }
        else if (p[i]==max)
        {
            count++;
        }
    }

    printf("\nLargest Element : %d\nNumber of Occurrences : %d\n", max, count);
    return 0;
}