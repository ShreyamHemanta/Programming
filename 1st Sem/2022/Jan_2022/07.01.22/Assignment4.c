#include<stdio.h>

int main()
{
    int a;
    int *b=&a,**c=&b,***d=&c;
    printf("Enter a Integer : ");
    scanf("%d",&a);
    printf("\na = %d\n&a = %p",a,&a);
    printf("\n*a = Error");
    //printf("\n%d",*a) ERROR STATEMENT
    printf("\nb = %p\n&b = %p\n*b = %d",b,&b,*b);
    printf("\nc = %p\n&c = %p\n*c = %p\n**c = %d",c,&c,*c,**c);
    printf("\nd = %p\n&d = %p\n*d = %p\n**d = %p\n***d = %d",d,&d,*d,**d,***d);
    return 0;
}