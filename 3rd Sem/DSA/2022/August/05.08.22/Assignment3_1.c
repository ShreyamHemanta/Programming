#include <stdio.h>

int main()
{
    int i,n,small,large;
    printf("\nEnter the number of elements in the Array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements in the Array :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    large=small=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>large)
        {
            large=a[i];
        }

        if(a[i]<small)
        {
            small=a[i];
        }
    }
    printf("\nThe smallest element is %d\n",small);
    printf("\nThe largest element is %d\n",large);
    return 0;
}