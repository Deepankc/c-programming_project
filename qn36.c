#include <stdio.h>

int main() {
    int N, sum = 0;

    printf("Enter a number N: ");
    scanf("%d", &N);

    if (N > 0) {
        sum = (N * (N + 1)) / 2;
    }

    printf("Sum of numbers from 0 to %d is: %d\n", N, sum);

    return 0;
}

