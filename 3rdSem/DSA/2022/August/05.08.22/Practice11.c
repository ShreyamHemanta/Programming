#include<stdio.h>
#include<stdlib.h>

int main()
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
    int temp=p[0];
    for (int i=1;i<n-1;i++)
    {
        int f=p[i];
        p[i]=temp*p[i+1];
        temp=f;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\t",p[i]);
    }
    return 0;

}