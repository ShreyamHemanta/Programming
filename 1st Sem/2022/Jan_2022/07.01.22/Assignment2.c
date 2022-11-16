#include<stdio.h>

int main()
{
    int a,b,temp;
    int *x=&a,*y=&b;
    printf("Enter 1st Integer , a = ");
    scanf("%d",&a);
    printf("Enter 2nd Integer , b = ");
    scanf("%d",&b);
    temp=*x;
    *x=*y;
    *y=temp;
    printf("a'= %d and b' = %d ",*x,*y);
    return 0;
}
