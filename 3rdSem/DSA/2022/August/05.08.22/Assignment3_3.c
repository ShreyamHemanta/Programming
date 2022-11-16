#include <stdio.h>

int main()
{
    int i,n,m;
    printf("\nEnter the number of elements in the Array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements in the Array :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to search : ");
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(a[i]==m)
        {
            printf("\nElement Found in position %d ",i+1);
        }
    }
    return 0;
}