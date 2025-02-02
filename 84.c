#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n, r, nPr;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the value of r: ");
    scanf("%d", &r);

    nPr = factorial(n) / factorial(n - r);

    printf("The value of %dP%d is: %d\n", n, r, nPr);

    return 0;
}

