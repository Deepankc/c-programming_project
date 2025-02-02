#include <stdio.h>

int countSetBits(unsigned int num) {
    int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int main() {
    unsigned int num;
    printf("Enter a number: ");
    scanf("%u", &num);

    printf("Number of 1's in the number: %d\n", countSetBits(num));

    return 0;
}

