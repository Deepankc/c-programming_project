#include <stdio.h>

unsigned char swapNibbles(unsigned char num) {
    return (num << 4) | (num >> 4);
}

int main() {
    unsigned char num;
    printf("Enter a hexadecimal number (0xXX): ");
    scanf("%hhx", &num);

    printf("Original number: 0x%X\n", num);
    printf("Number after swapping nibbles: 0x%X\n", swapNibbles(num));

    return 0;
}

