#include<stdio.h>

int main()
{
    int i,j;
    char a[10];
    printf("Enter The String \n");
    scanf("%s",a);
    for(i=0;a[i]!=0;i++);
    for(j=i-1;j>=0;j--)
    {
        printf("%c",a[j]);
    }
    return 0;
}