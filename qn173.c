#include <stdio.h>

int main() {
    int N;
    printf("Enter a number N: ");
    scanf("%d", &N);

    printf("Even numbers from 1 to %d are:\n", N);
    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }

    printf("\nOdd numbers from 1 to %d are:\n", N);
    for (int i = 1; i <= N; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }

    return 0;
}

