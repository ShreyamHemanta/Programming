//Swapping 2 numbers

#include <stdio.h>

void swap(int *x, int *y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

void main() {
	int a, b;
	printf("Enter Two numbers \n");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("%d	%d\n",a,b);
	swap(&a,&b);
	printf("After Swapping :\n");
	printf("%d	%d",a,b);
}