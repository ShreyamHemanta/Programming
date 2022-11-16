#include<stdio.h>

int main()
{
    int i;
    char a[10];
    printf("Enter The String : \n");
    scanf("%s",a);
    for(i=0;a[i]!=0;i++);
    printf("Number Of Characters in the String : %d",i);
    return 0;
}

