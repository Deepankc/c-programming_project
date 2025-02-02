#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    qsort(arr, n, sizeof(int), compare);

    if (n % 2 == 0) {
        printf("Median: %.2f\n", (arr[n/2 - 1] + arr[n/2]) / 2.0);
    } else {
        printf("Median: %d\n", arr[n/2]);
    }

    return 0;
}

