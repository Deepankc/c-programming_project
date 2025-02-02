#include <stdio.h>

void swapBits(int *n, int pos1, int pos2) {
    int bit1 = (*n >> pos1) & 1;
    int bit2 = (*n >> pos2) & 1;

    if (bit1 != bit2) {
        *n ^= (1 << pos1);
        *n ^= (1 << pos2);
    }
}

int main() {
    int num, pos1, pos2;

    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the first bit position: ");
    scanf("%d", &pos1);
    printf("Enter the second bit position: ");
    scanf("%d", &pos2);

    printf("Original number: %d\n", num);
    swapBits(&num, pos1, pos2);
    printf("Number after swapping bits: %d\n", num);

    return 0;
}

