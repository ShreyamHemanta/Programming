#include<stdio.h>

int sum(int *b)
{
    int i,j,t=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(b[i]%2==1)
            {
                t=t+b[i];
            }
        }
    }
    return t;
}

int main()
{
    int i,j,a[8],b;

    printf("Enter The Elements :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i]);
        }
    }
    b=sum(&a[0]);
    printf("The Sum of all the Odd Elements is : %d",b);
    return 0;
}
