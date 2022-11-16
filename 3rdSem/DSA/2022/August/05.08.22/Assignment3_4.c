#include <stdio.h>

int main()
{
    int i,j,n,temp;
    printf("\nEnter the number of elements in the Array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements in the Array :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0; i<n; i++)
    {
        for (j=i+1; j<n; j++)
        {
            if (a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;    
            }        
        }
    }
    printf("\nSorted Data :\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;

}
