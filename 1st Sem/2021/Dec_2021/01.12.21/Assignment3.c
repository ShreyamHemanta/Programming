#include<stdio.h>

int main()
{
    int a,n;
    printf("Enter A Number : ");
    scanf("%d",&a);
    for (n=2;n<a;n++)
    {
        if (a%n==0)
        {
            printf("The Number Is Not A Prime Number");
            break;
        }
        else
        {
            printf("The Number Is A Prime Number");
            break;
        }
        
    }
    
    return 0;
}