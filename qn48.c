#include <stdio.h>

int main() {
    int dividend, divisor, quotient, remainder;

    printf("Enter the dividend: ");
    scanf("%d", &dividend);

    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    quotient = dividend / divisor; 
    remainder = dividend - (quotient * divisor); 

    printf("The remainder of %d divided by %d is: %d\n", dividend, divisor, remainder);

    return 0;
}

