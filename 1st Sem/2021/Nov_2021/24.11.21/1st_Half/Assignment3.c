#include <stdio.h>

int main()
{
    int a,b,c,d;
    printf("Enter operator : \n1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n");
    scanf("%d",&a);
    printf("\nEnter 1st Number :");
    scanf("%d",&b);
    printf("\nEnter 2nd Number :");
    scanf("%d",&c);
    switch(a)
    {
        case 1: d=b+c ;printf("%d",d);break;
        case 2: d=b-c ;printf("%d",d);break;
        case 3: d=b*c ;printf("%d",d);break;
        case 4: d=b/c ;printf("%d",d);break;
        default : printf("Invalid");
    }
    return 0;
}