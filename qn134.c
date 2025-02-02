#include <stdio.h>

unsigned int reverseBits(unsigned int num) {
    unsigned int reversedNum = 0;
    int bitCount = sizeof(num) * 8;
    for (int i = 0; i < bitCount; i++) {
        reversedNum <<= 1;
        if (num & 1)
            reversedNum |= 1;
        num >>= 1;
    }
    return reversedNum;
}

int main() {
    unsigned int num;
    printf("Enter a number: ");
    scanf("%u", &num);

    printf("Original number: %u\n", num);
    printf("Reversed number: %u\n", reverseBits(num));

    return 0;
}

