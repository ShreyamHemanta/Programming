#include <stdio.h>
int main() {
    int num;
    printf("Enter B's number: ");
    scanf("%d", &num);

    int max = 9999, min = -9999;
    int guess;
    while (min <= max) {
        guess = min + (max - min)/2;
        if (guess > num) {
            max = guess-1;
            printf("\n%d Try a smaller number", guess);
        }
        else if (guess < num) {
            min = guess+1;
            printf("\n%d Try a bigger number", guess);
        }
        else {
            printf("\n%d You got it\n\n", guess);
            break;
        }
    }

    return 0;
}