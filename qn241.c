#include <stdio.h>

int main() {
    int N, sum = 0;
    
    printf("Enter the number of terms (N): ");
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            sum -= i;
        } else {
            sum += i;
        }
    }
    
    printf("The sum of the series is: %d\n", sum);
    
    return 0;
}

