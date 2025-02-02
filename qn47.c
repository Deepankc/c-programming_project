#include <stdio.h>

int main() {
    int a = 5, b = 10;

    printf("The value of a is: %d\n", a);
    printf("The value of b is: %d\n", b);

    printf("Nested printf example: %d\n", printf("Inner printf: %d, %d\n", a, b));

    return 0;
}

