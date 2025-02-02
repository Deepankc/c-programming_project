#include <stdio.h>

int main() {
    int N;
    printf("Enter a number N: ");
    scanf("%d", &N);

    printf("Prime numbers from 1 to %d are:\n", N);
    for (int num = 2; num <= N; num++) {
        int isPrime = 1;
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("%d ", num);
        }
    }

    return 0;
}

