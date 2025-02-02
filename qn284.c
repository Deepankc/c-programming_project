#include <stdio.h>

int findBiggest(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    }

    int biggest = findBiggest(arr, n - 1);
    if (arr[n - 1] > biggest) {
        return arr[n - 1];
    } else {
        return biggest;
    }
}

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int biggest = findBiggest(arr, n);
    printf("Biggest number is: %d\n", biggest);

    return 0;
}

