#include <stdio.h>

void insertionSort(int arr[], int size, int *comparisons) {
    for (int i = 1; i < size; ++i) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
            (*comparisons)++;
        }

        arr[j + 1] = key;
    }
}

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) 
        printf("%d ", arr[i]);
    printf("\n");
}

void processScenario(const char *inputFile, const char *outputFile, const char *scenario) {
    FILE *input = fopen(inputFile, "r");
    if (!input) {
        printf("Error opening input file.\n");
        return;
    }

    int size;
    printf("Enter number of elements to be read from file: ");
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; ++i) 
        fscanf(input, "%d", &arr[i]);

    fclose(input);

    printf("Before Sorting: ");
    displayArray(arr, size);

    int comparisons = 0;
    insertionSort(arr, size, &comparisons);

    FILE *output = fopen(outputFile, "w");
    if (!output) {
        printf("Error opening output file.\n");
        return;
    }

    for (int i = 0; i < size; ++i) 
        fprintf(output, "%d ", arr[i]);

    fclose(output);

    printf("After Sorting: ");
    displayArray(arr, size);

    printf("Number of Comparisons: %d\n", comparisons);
    printf("Scenario: %s\n\n", scenario);
}

int main() {
    int option;

    do {
        printf("MAIN MENU (INSERTION SORT)\n");
        printf("1. Ascending Data\n");
        printf("2. Descending Data\n");
        printf("3. Random Data\n");
        printf("4. ERROR (EXIT)\n");
        printf("Enter option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                processScenario("inAsce.dat", "outInsAsce.dat", "Best-case");
                break;
            case 2:
                processScenario("inDesc.dat", "outInsDesc.dat", "Worst-case");
                break;
            case 3:
                processScenario("inRand.dat", "outInsRand.dat", "Random-case");
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid option. Please choose again.\n");
        }

    } while (option != 4);

    return 0;
}