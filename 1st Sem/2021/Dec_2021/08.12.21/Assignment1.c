#include <stdio.h>

int main()
{
int i=1,j=10;
fw:
printf("%d ",i);
i++;
if(i<=10)
{
goto fw;
}
printf("\n");
bw:
printf("%d ",j);
j--;
if(j>0)
{
goto bw;
}
return 0;
}