#include <stdio.h>

int main() {
    int num1, num2, lcm, gcd, temp, a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    a = num1;
    b = num2;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    gcd = a;
    lcm = (num1 * num2) / gcd;

    printf("LCM is: %d\n", lcm);

    return 0;
}

