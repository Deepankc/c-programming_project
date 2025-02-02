#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n], reversedArr[n];

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        reversedArr[i] = arr[n-i-1];
    }

    printf("Reversed array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", reversedArr[i]);
    }

    return 0;
}

