#include <stdio.h>

int main() {
    int n, sum = 0, product = 1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
        product *= arr[i];
    }

    printf("Sum of elements: %d\n", sum);
    printf("Product of elements: %d\n", product);

    return 0;
}

