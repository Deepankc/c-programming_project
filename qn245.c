#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        sum += (i * (i + 1)) / (double)(i + 2);
    }
    
    printf("The sum of the series is: %lf\n", sum);
    
    return 0;
}

