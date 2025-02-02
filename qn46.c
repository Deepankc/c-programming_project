#include <stdio.h>

int main() {
    float num1 = 5.0 / 3.0;
    float num2 = 1.6666666;

    printf("num1: %.10f\n", num1);
    printf("num2: %.10f\n", num2);

    if (num1 == num2) {
        printf("num1 and num2 are equal.\n");
    } else {
        printf("num1 and num2 are not equal.\n");
    }

    return 0;
}

