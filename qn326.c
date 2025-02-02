#include <stdio.h>

int main() {
    int m, n;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    int matrix[m][n];
    int sum = 0, product = 1;

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
            product *= matrix[i][j];
        }
    }

    printf("Sum of all elements: %d\n", sum);
    printf("Product of all elements: %d\n", product);

    return 0;
}

