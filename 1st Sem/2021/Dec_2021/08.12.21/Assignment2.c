#include <stdio.h>

int main()
{
int i;
printf("Enter A Number : ");
scanf("%d",&i);
ab:
printf("%d ",i);
i=i-2;
if(i>0)
{
goto ab;
}
printf("\n");
return 0;
}