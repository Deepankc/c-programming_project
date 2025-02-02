#include <stdio.h>

int main() {
    int i,num1, num2, product = 0;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    for (i = 0; i < num2; i++) {
        product += num1;
    }

    printf("The product of %d and %d is: %d\n", num1, num2, product);

    return 0;
}

