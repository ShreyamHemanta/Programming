#include <stdio.h>

int findRotationCount(int arr[], int N) {
    int low = 0, high = N - 1;

    while (low <= high) {
        if (arr[low] <= arr[high])
            return low;

        int mid = (low + high) / 2;
        int next = (mid + 1) % N;
        int prev = (mid + N - 1) % N;

        if (arr[mid] <= arr[next] && arr[mid] <= arr[prev]) 
            return mid;
        else if (arr[mid] <= arr[high]) 
            high = mid - 1;
        else if (arr[mid] >= arr[low])
            low = mid + 1;
    }

    return -1; // Not found
}

int main() {
    int N;
    printf("Enter the size of the array: ");
    scanf("%d", &N);

    int arr[N];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < N; ++i) 
        scanf("%d", &arr[i]);

    int rotationCount = findRotationCount(arr, N);

    if (rotationCount != -1) 
        printf("The array has been rotated %d times.\n", rotationCount);
    else 
        printf("The array is not rotated.\n");

    return 0;
}