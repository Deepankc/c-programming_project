#include <stdio.h>

int main() {
    int n, sum = 0, current_term = 1;
    
    printf("Enter the value of N: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        sum += current_term;
        current_term = current_term * 10 + 1;
    }
    
    printf("The sum of the series is: %d\n", sum);
    
    return 0;
}

