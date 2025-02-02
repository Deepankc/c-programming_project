#include <stdio.h>
#include <math.h>

int main() {
    int a, r, n, sum = 0;
    
    printf("Enter the first term (a): ");
    scanf("%d", &a);
    printf("Enter the common ratio (r): ");
    scanf("%d", &r);
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        sum += a * pow(r, i);
    }
    
    printf("The sum of the G.P. series is: %d\n", sum);
    
    return 0;
}

