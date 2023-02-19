#include <stdio.h>

void NGE(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        int f=0;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]>a[i])
            {
                printf("%d : %d\n",a[i],a[j]);
                f=1;
                break;
            }
            if(f==0)
            {
                printf("%d : %d\n",a[i],-1);
            }
        }
    }
}

int main()
{
    int n;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the values in the array :\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    NGE (a,n);
}