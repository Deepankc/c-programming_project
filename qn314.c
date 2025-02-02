#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Squares of array elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i] * arr[i]);
    }
    printf("\n");

    return 0;
}

