#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, compoundInterest;
    int n;

    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter annual interest rate (in %%): ");
    scanf("%f", &rate);
    printf("Enter time (in years): ");
    scanf("%f", &time);
    printf("Enter number of times interest applied per time period: ");
    scanf("%d", &n);

    compoundInterest = principal * pow(1 + (rate / (100 * n)), n * time

