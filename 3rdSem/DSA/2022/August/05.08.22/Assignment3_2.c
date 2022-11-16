#include <stdio.h>

int main()
{
    int i,n,temp;
    printf("\nEnter the number of elements in the Array : ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the elements of the array :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The array is :\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    if(n%2==0)
    {
        for(i=0;i<n/2;i++)
        {
            temp=a[i];
            a[i]=a[n-i-1];
            a[n-i-1]=temp;
        }
    }
    else
    {
        for(i=0;i<(n+1)/2;i++)
        {
            temp=a[i];
            a[i]=a[n-i-1];
            a[n-i-1]=temp;
        }    
    }
    printf("\nThe New Array is :\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}