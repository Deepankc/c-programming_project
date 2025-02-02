#include <stdio.h>

void fibonacci(int n, int first, int second) {
    if (n == 0) {
        return;
    }
    printf("%d ", first);
    fibonacci(n - 1, second, first + second);
}

int main() {
    int n;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    printf("Fibonacci Series: ");
    fibonacci(n, 0, 1);

    return 0;
}

