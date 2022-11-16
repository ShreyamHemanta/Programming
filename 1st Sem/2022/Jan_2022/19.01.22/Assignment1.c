#include<stdio.h>

int opr(int a,int b,float *x,int *y,int *z)
{
    *x=(a+b)/2.0;
    printf("The Average Is : %0.2f\n",*x);
    if(a>b)
    {
        *y=a;
        *z=b;
    }
    else
    {
        *y=b;
        *z=a;
    }
    printf("The Greatest Number Is : %d\n",*y);
    printf("The Smallest Number Is : %d",*z);
}

int main()
{
    int a,b;
    float l;
    int m,n;
    printf("Enter two Numbers :\n");
    scanf("%d",&a);
    scanf("%d",&b);
    opr(a,b,&l,&m,&n);
    return 0;
}