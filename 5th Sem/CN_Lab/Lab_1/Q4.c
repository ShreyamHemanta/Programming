#include <stdio.h>

struct pkt {
    char ch1;
    char ch2[2];
    char ch3;
};

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    struct pkt myStruct;

    // Extracting individual digits and storing them in the structure
    myStruct.ch3 = num % 10;
    num /= 10;
    myStruct.ch2[1] = num % 10;
    num /= 10;
    myStruct.ch2[0] = num % 10;
    num /= 10;
    myStruct.ch1 = num % 10;

    printf("\nContent of the structure members:\n");
    printf("ch1: %c\n", myStruct.ch1);
    printf("ch2: %c%c\n", myStruct.ch2[0], myStruct.ch2[1]);
    printf("ch3: %c\n", myStruct.ch3);

    // Aggregating the structure members to form the original number
    int originalNum = (myStruct.ch1 * 1000) + (myStruct.ch2[0] * 100) + (myStruct.ch2[1] * 10) + myStruct.ch3;
    printf("\nThe original number: %d\n", originalNum);

    return 0;
}
