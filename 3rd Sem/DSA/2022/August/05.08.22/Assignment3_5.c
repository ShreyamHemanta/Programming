#include <stdio.h>

void display(int a[],int n,int x,int y)
{
    int z=0;
    int f=0;
    int present=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            f=1;
        }
        if(f==1)
        {
            present=1;
            z++;
            printf("%d\t",a[i]);
        }
        if(a[i]==y&f==1)
        {
            f=2;
            break;
        }
        if(f=2)
        {
            printf("\nTotal Elements in the Array : %d\n",z);
        }
        if(present==0&f!=2)
        {
            printf("Element Not Found");
        }
    }
}

int main()
{
    int x,y,n;
    printf("\nEnter the number of elements in the Array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements in the Array :\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter 1st element : ");
    scanf("%d",&x);
    printf("Enter 2nd element : ");
    scanf("%d",&y);
    display(a,n,x,y);
    return 0;

}