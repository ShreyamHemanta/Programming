#include <stdio.h>

void sort(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i%2==0])
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[j]%2==0)
                {
                    int temp=a[j];
                    a[j]=a[i];
                    a[i]=temp;
                }
            }
        }
    }
    printf("Array after sorting : \n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}

int main()
{
    int n;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements in the array :\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,n);
    return 0;
}