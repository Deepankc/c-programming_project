#include <stdio.h>

int main() {
    int value;

    printf("Enter an integer: ");
    scanf("%d", &value);

    printf("Decimal: %d\n", value);
    printf("Octal: %o\n", value);
    printf("Hexadecimal: %X\n", value);

    return 0;
}

