#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n], newArr[n], j = 0;

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (!isPrime(arr[i])) {
            newArr[j++] = arr[i];
        }
    }

    printf("Array after removing prime numbers:\n");
    for (int i = 0; i < j; i++) {
        printf("%d ", newArr[i]);
    }

    return 0;
}

