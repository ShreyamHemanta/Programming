#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) 
        return a;
    return gcd(b, a % b);
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <source_file> <destination_file>\n", argv[0]);
        return 1;
    }

    FILE *sourceFile = fopen(argv[1], "r");
    if (!sourceFile) {
        printf("Error opening source file.\n");
        return 1;
    }

    FILE *destinationFile = fopen(argv[2], "w");
    if (!destinationFile) {
        printf("Error opening destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    int num1, num2;
    while (fscanf(sourceFile, "%d %d", &num1, &num2) == 2) {
        int result = gcd(num1, num2);
        fprintf(destinationFile, "The GCD of %d and %d is %d\n", num1, num2, result);
    }

    fclose(sourceFile);
    fclose(destinationFile);

    // Display the contents of the output file
    destinationFile = fopen(argv[2], "r");
    if (!destinationFile) {
        printf("Error opening destination file for reading.\n");
        return 1;
    }

    printf("Contents of the output file %s:\n", argv[2]);
    char line[100];
    while (fgets(line, sizeof(line), destinationFile)) {
        printf("%s", line);
    }

    fclose(destinationFile);

    return 0;
}