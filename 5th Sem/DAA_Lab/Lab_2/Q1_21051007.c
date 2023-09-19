#include <stdio.h>

void decimalToBinary(int decimal, FILE *outputFile) {
    for (int i = 15; i >= 0; --i) {
        fprintf(outputFile, "%d", (decimal >> i) & 1);
    }
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Usage: %s <n> <source_file> <destination_file>\n", argv[0]);
        return 1;
    }

    int n;
    sscanf(argv[1], "%d", &n);

    FILE *sourceFile = fopen(argv[2], "r");
    if (!sourceFile) {
        printf("Error opening source file.\n");
        return 1;
    }

    FILE *destinationFile = fopen(argv[3], "w");
    if (!destinationFile) {
        printf("Error opening destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    int decimal;
    printf("First %d decimals: ", n);
    for (int i = 0; i < n; ++i) {
        if (fscanf(sourceFile, "%d", &decimal) != 1) {
            printf("Error reading decimal number from source file.\n");
            break;
        }
        printf("%d ", decimal);
        fprintf(destinationFile, "The binary equivalent of %d is ", decimal);
        decimalToBinary(decimal, destinationFile);
        fprintf(destinationFile, "\n");
    }

    fclose(sourceFile);
    fclose(destinationFile);

    // Display the contents of the output file
    destinationFile = fopen(argv[3], "r");
    if (!destinationFile) {
        printf("Error opening destination file for reading.\n");
        return 1;
    }

    printf("\nThe binary equivalents are:\n");
    char line[100];
    while (fgets(line, sizeof(line), destinationFile)) {
        printf("%s", line);
    }

    fclose(destinationFile);

    return 0;
}