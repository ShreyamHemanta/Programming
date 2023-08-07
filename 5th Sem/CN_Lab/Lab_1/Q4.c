/*Write a C Program to enter a number and store the number across the following 
structure and print the content of each member of the structure. Then aggregate each 
member of the structure to form the original number and print the same.
struct pkt{
char ch1;
char ch2[2];
char ch3;
};*/

#include <stdio.h>

struct pkt {
    char ch1;
    char ch2[2];
    char ch3;
};

int main() {
    struct pkt myPacket;
    int originalNumber;

    printf("Enter a number: ");
    scanf("%d", &originalNumber);

    // Store the number across the structure
    myPacket.ch1 = (char)(originalNumber >> 16);
    myPacket.ch2[0] = (char)(originalNumber >> 8);
    myPacket.ch2[1] = (char)originalNumber;
    myPacket.ch3 = (char)(originalNumber >> 24);

    // Print the content of each member of the structure
    printf("ch1: %d\n", myPacket.ch1);
    printf("ch2[0]: %d\n", myPacket.ch2[0]);
    printf("ch2[1]: %d\n", myPacket.ch2[1]);
    printf("ch3: %d\n", myPacket.ch3);

    // Aggregate each member of the structure to form the original number
    int reconstructedNumber = 
        ((int)myPacket.ch3 << 24) |
        ((int)myPacket.ch1 << 16) |
        ((int)myPacket.ch2[0] << 8) |
        (int)myPacket.ch2[1];

    // Print the reconstructed number
    printf("Reconstructed Number: %d\n", reconstructedNumber);

    return 0;
}
