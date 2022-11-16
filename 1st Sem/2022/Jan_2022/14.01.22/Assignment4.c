#include<stdio.h>

void des1()
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("-");
        }
        printf("\n");
    }
}
void des2()
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void des3()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

int main()
{
    printf("AB\n");
    des1();
    printf("CD\n");
    des2();
    printf("LM\n");
    des3();
    return 0;
}
