#include <stdio.h>

int main() {
    int n, divisor, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    for (int i = 0; i < n; i++) {
        if (arr[i] % divisor == 0) {
            count++;
        }
    }

    printf("Total number of elements divisible by %d: %d\n", divisor, count);

    return 0;
}

