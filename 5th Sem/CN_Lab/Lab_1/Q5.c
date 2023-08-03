#include <stdio.h>

// Union to hold a number and its individual bytes
union EndianCheck {
    int num;
    unsigned char bytes[sizeof(int)];
};

// Function to check endianness of the host machine
int isLittleEndian() {
    union EndianCheck check;
    check.num = 1;
    return (check.bytes[0] == 1);
}

// Function to swap endianness of a number
int swapEndianness(int num) {
    return ((num >> 24) & 0xFF) | ((num >> 8) & 0xFF00) | ((num << 8) & 0xFF0000) | ((num << 24) & 0xFF000000);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check the endianness of the host machine
    if (isLittleEndian()) {
        printf("Host machine is Little Endian.\n");
    } else {
        printf("Host machine is Big Endian.\n");
    }

    // Display the content of each byte location
    union EndianCheck check;
    check.num = num;
    printf("Content of each byte location:\n");
    for (int i = 0; i < sizeof(int); i++) {
        printf("Byte %d: %02X\n", i, check.bytes[i]);
    }

    // Convert endianness
    int convertedNum = swapEndianness(num);
    printf("Converted number: %d\n", convertedNum);

    return 0;
}
