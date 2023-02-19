#include <stdio.h>

int main()
{
    int a,b,c,d;
    printf("Enter the value of 4 byte blocks : \n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int B1=a<<24;
    int B2=b<<16;
    int B3=c<<8;
    int B4=d;
    int n=(B1|B2|B3|B4);
    printf("The Number is : %d",n);
    return 0;
}
    
