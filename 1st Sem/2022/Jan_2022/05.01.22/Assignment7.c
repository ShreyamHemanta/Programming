#include<stdio.h>

int main()
{
    int i,j,n;
    char a[10],b[10];
    printf("Enter The String \n");
    scanf("%s",a);
    for(i=0;a[i]!=0;i++);
    for(n=0,j=i-1;n<i,j>=0;j--,n++)
    {
        b[n]=a[j];
        printf("%c",b[n]);
    }
    return 0;
}