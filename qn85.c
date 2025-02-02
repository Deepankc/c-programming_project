#include <stdio.h>

int main() {
    int binary1, binary2, product = 0, factor = 1;

    printf("Enter the first binary number: ");
    scanf("%d", &binary1);

    printf("Enter the second binary number: ");
    scanf("%d", &binary2);

    while (binary2 != 0) {
        if (binary2 % 10 == 1) {
            product += binary1 * factor;
        }
        binary1 *= 10;
        binary2 /= 10;
        factor *= 10;
    }

    printf("The product of the two binary numbers is: %d\n", product);

    return 0;
}

