#include <stdio.h>

int main()
{
    int a;
    printf("Enter a Number : ");
    scanf("%d",&a);
    int B1=(a>>24)&0xff;
    int B2=(a>>16)&0xff;
    int B3=(a>>8)&0xff;
    int B4=(a)&0xff;
    printf("The comntents of B1 = %d \n The contents of B1 = %d \n The contents of B1 = %d \n The contents of B1 = %d ",B1,B2,B3,B4);
    return 0;
}
