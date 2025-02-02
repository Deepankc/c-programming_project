#include <stdio.h>
#include <math.h>

double factorial(int n) {
    double fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    double x, sum = 0.0;
    int n;
    
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        sum += x / factorial(2 * i);
    }
    
    printf("The sum of the series is: %lf\n", sum);
    
    return 0;
}

