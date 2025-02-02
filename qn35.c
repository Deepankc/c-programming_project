#include <stdio.h>

int main() {
    int number, A, B;

    printf("Enter the number: ");
    scanf("%d", &number);

    printf("Enter the first divisor (A): ");
    scanf("%d", &A);

    printf("Enter the second divisor (B): ");
    scanf("%d", &B);

    if (number % A == 0 && number % B == 0) {
        printf("%d is divisible by both %d and %d\n", number, A, B);
    } else {
        printf("%d is not divisible by both %d and %d\n", number, A, B);
    }

    return 0;
}

