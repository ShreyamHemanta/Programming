#include <stdio.h>
#include <stdlib.h>

int input(int a,int *p)
{
    printf("Enter the Elements in the array : \n");
    for(int i=0;i<a;i++)
    {
        scanf("%d",&p[i]);
    }
};

int output(int a,int *p)
{
    printf("The elements in the array are : ");
    for(int i=0;i<a;i++)
    {
        printf("%d",p[i]);
    }
};

int sort(int a,int *p)
{
    int temp;
    for(int i=0;i<a;i++)
    {
        for(int j=i+1;j<a;j++)
        {
            if(p[i]>p[j])
            {
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    }
    printf("\nThe elements after sorting : ");
    for(int i=0;i<a;i++)
    {
        printf("%d",p[i]);
    }

}

int search(int a,int *p)
{
    int m;
    printf("\nEnter the elements to search : ");
    scanf("%d",&m);
    for(int i=0;i<a;i++)
    {
        if(p[i]==m)
        {
            printf("Element Found ");
            break;
        }
        else if
        {
            printf("Element Not Found");
        }
    }
}

int main()
{
    int n;
    printf("Enter the Number of elements in the array : ");
    scanf("%d",&n);
    int *ptr=(int*)malloc(n*(sizeof(int)));
    input(n,ptr);
    output(n,ptr);
    sort(n,ptr);
    search(n,ptr);
    return 0;
}