#include <stdio.h>

int main() {
    int a, b;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    b = ~b + 1; 
    int result = a + b;

    printf("Result of %d - %d is: %d\n", a, b, result);

    return 0;
}

