#include <stdio.h>

void operate()
{
    int a,b,c,n;
    printf("Enter the numbers :\n");
    scanf("%d%d",&a,&b);
    printf("Enter the operation :\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        {
            c=a+b;
            printf("%d",c);
            break;
        }
        case 2:
        {
            if(a>b)
            {
                c=a-b;
                printf("%d",c);
                break;
            }
            else
            {
                c=b-a;
                printf("%d",c);
                break;
            }
        }
        case 3:
        {
            c=a*b;
            printf("%d",c);
            break;
        }
        case 4:
        {
            c=a/b;
            printf("%d",c);
            break;
        }
        default:
        {
            printf("\nInvalid");
        }
    }
}

int main()
{
    operate();
    return 0;
}