#include <stdio.h>

int main() {
    int N;
    printf("Enter a number N: ");
    scanf("%d", &N);

    int i = 1;
    printf("Odd numbers from 1 to %d are:\n", N);
    while (i <= N) {
        printf("%d ", i);
        i += 2;
    }

    return 0;
}

