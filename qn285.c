#include <stdio.h>

int countSubsets(int arr[], int n) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j] - arr[i] == 1 || arr[i] == arr[j]) {
                count++;
            }
        }
    }

    return count;
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

    int result = countSubsets(arr, n);
    printf("Number of subsets with difference 0 or 1: %d\n", result);

    return 0;
}

