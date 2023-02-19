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
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (p[j]>p[i])
            {
                p[i]=p[j];
                break;
            }
        }
    }
    for (int i=0;i<n;i++)
    {
        printf("%d\t",p[i]);
    }
    return 0;
}