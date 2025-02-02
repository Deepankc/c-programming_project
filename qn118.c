#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, emi;
    printf("Enter loan amount (principal): ");
    scanf("%f", &principal);
    printf("Enter annual interest rate (in %%): ");
    scanf("%f", &rate);
    printf("Enter loan tenure in years: ");
    scanf("%f", &time);

    rate = rate / (12 * 100); 
    time = time * 12; 

    emi = (principal * rate * pow(1 + rate, time)) / (pow(1 + rate, time) - 1);

    printf("The EMI is: %.2f\n", emi);
    return 0;
}

