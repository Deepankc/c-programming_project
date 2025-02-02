#include <stdio.h>
#include <math.h>

double factorial(int n) {
    double fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

double sine_series(double x, int terms) {
    double sin_x = 0;
    
    for (int n = 0; n < terms; n++) {
        double term = pow(-1, n) * pow(x, 2 * n + 1) / factorial(2 * n + 1);
        sin_x += term;
    }
    
    return sin_x;
}

int main() {
    double x;
    int terms;
    
    printf("Enter the value of x (in radians): ");
    scanf("%lf", &x);
    printf("Enter the number of terms: ");
    scanf("%d", &terms);
    
    double result = sine_series(x, terms);
    
    printf("The value of sin(x) is approximately: %lf\n", result);
    
    return 0;
}

