#include <stdio.h>

int main() {
    int num1, num2, hcf, temp1, temp2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    temp1 = num1;
    temp2 = num2;

    while (temp2 != 0) {
        hcf = temp2;
        temp2 = temp1 % temp2;
        temp1 = hcf;
    }

    printf("The HCF of %d and %d is: %d\n", num1, num2, temp1);

    return 0;
}

