#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }
    
    printf("The sum of the H.P. series is: %lf\n", sum);
    
    return 0;
}

