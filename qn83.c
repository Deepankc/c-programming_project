#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n, r, nCr;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the value of r: ");
    scanf("%d", &r);

    nCr = factorial(n) / (factorial(r) * factorial(n - r));

    printf("The value of %dC%d is: %d\n", n, r, nCr);

    return 0;
}

