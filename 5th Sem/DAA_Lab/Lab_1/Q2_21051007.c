#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Input Array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    int prefixSum[n];
    prefixSum[0] = arr[0];
    for (i = 1; i < n; i++)
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    
    printf("Output Array: ");
    for (i = 0; i < n; i++)
        printf("%d ", prefixSum[i]);
    printf("\n");

    return 0;
}