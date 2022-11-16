#include<stdio.h>

int sum(int *b)
{
    int i,t=0;
    for(i=0;i<8;i++)
    {
        if(b[i]%2==1)
        {
            t=t+b[i];
        }
    }
    return t;
}

int main()
{
    int i,a[8],b;

    printf("Enter The Elements :\n");
    for(i=0;i<8;i++)
    {
        scanf("%d",&a[i]);
    }
    b=sum(&a[0]);
    printf("The Sum of all the Odd Elements is : %d",b);
    return 0;
}



