#include<stdio.h>

int opr(int x,int y,char o)
{
    int z;
    if(o=='+')
    {
        z=x+y;
        return z;
    }
    else if(o=='-')
    {
        z=x-y;
        return z;
    }
    else if(o=='*')
    {
        z=x*y;
        return z;
    }
    else if(o=='/')
    {
        z=x/y;
        return z;
    }
    else
    {
        printf("Error");
    }
}

int main()
{
    int a,x,y,z;
    char o;
    printf("Enter The 1st Number :\n");
    scanf("%d",&x);
    printf("Enter The 2nd Number :\n");
    scanf("%d",&y);
    printf("Enter The Operator : \n");
    getchar();
    scanf("%c",&o);
    a=opr(x,y,o);
    printf("The Final result is : %d",a);
    return 0;
}