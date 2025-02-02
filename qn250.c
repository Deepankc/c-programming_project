#include <stdio.h>

int main() {
    int a, d, n, sum;
    
    printf("Enter the first term (a): ");
    scanf("%d", &a);
    printf("Enter the common difference (d): ");
    scanf("%d", &d);
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    
    sum = n / 2 * (2 * a + (n - 1) * d);
    
    printf("The sum of the A.P. series is: %d\n", sum);
    
    return 0;
}

