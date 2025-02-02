#include <stdio.h>

int minimumBits(int n) {
    int bits = 0;
    while (n > 0) {
        bits++;
        n = n >> 1;
    }
    return bits;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int bits = minimumBits(num);
    printf("Minimum bits required to store %d: %d\n", num, bits);
    return 0;
}

