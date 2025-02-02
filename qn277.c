#include <stdio.h>

int main() {
    int n, divisor, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n], newArr[n];

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    for (int i = 0; i < n; i++) {
        if (arr[i] % divisor == 0) {
            newArr[count++] = arr[i];
        }
    }

    printf("New array with elements divisible by %d:\n", divisor);
    for (int i = 0; i < count; i++) {
        printf("%d ", newArr[i]);
    }

    return 0;
}

