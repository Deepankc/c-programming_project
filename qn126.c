#include <stdio.h>

void binaryAddition(int a, int b) {
    printf("Binary Addition: %d + %d = %d\n", a, b, a + b);
}

void binarySubtraction(int a, int b) {
    printf("Binary Subtraction: %d - %d = %d\n", a, b, a - b);
}

int main() {
    int a = 5, b = 3;
    binaryAddition(a, b);
    binarySubtraction(a, b);
    return 0;
}

