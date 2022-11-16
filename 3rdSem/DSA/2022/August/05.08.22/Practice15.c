#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Enter Number of elements in the array : ");
    scanf("%d",&n);
    int *p=(int*)malloc(n*sizeof(int));
    int *r= (int*)malloc(n*sizeof(int));

    printf("Enter the elements in the array : ");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }

    int one=n-1;
    int zero=0;

    for (int i=0;i<n;i++)
    {
        if (p[i] == 0)
        {
            r[zero++] =p[i];
        }
        else
        {
            r[one--]=p[i];            
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\t",r[i]);
    }
    return 0;
}