#include <stdio.h>

double factorial(int n) {
    double fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    double sum = 0.0;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        sum += (pow(i, 2) / factorial(i));
    }
    
    printf("The sum of the series is: %lf\n", sum);
    
    return 0;
}

