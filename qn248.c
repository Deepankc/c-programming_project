#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double x, sum = 1.0;
    
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        sum += 1 / pow(x, i);
    }
    
    printf("The sum of the series is: %lf\n", sum);
    
    return 0;
}

