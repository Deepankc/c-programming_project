#include <stdio.h>

int main() {
    int N, sum = 0;
    
    printf("Enter the value of N: ");
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            sum += j;
        }
    }
    
    printf("The sum of the series is: %d\n", sum);
    
    return 0;
}

