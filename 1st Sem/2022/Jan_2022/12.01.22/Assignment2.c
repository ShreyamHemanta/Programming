#include<stdio.h>
int main()
{
    int i=0,j,k;
    char a[50];
    printf("Enter the string : ");
    scanf("%s",a);
    char *x=&a[0];
    while(a[i]!='\0')
    i++;
    for(k=0;k<i;k++)
    {
        for(j=k;j<i;j++)
            printf("%c",*x+j);
        printf("\n");
    }
    printf("\n");
    for(k=0;k<i;k++)
    {
        for(j=k;j<i;j++)
            printf("%c",*x+(i-j-1));
        printf("\n");
    }
    return 0;
}