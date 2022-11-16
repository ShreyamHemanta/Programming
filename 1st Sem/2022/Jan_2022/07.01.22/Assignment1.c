#include<stdio.h>

int main()
{
    int a;
    float b;
    char c;
    int *x=&a;
    float *y=&b;
    char *z=&c;
    printf("Enter an Integer : ");
    scanf("%d",&a);
    printf("\nEnter a Real Number : ");
    scanf("%f",&b);
    printf("\nEnter a Character : ");
    getchar();
    scanf("%c",&c);
    printf("\nTne Integer is : %d ",*x);
    printf("\nThe Real Number is : %f",*y);
    printf("\nThe Character is : %c",*z);
}