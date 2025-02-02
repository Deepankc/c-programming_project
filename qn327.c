#include <stdio.h>

int main() {
    int m, n;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    int matrix[m][n];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Sum of each row:\n");
    for (int i = 0; i < m; i++) {
        int row_sum = 0;
        for (int j = 0; j < n; j++) {
            row_sum += matrix[i][j];
        }
        printf("Row %d sum: %d\n", i+1, row_sum);
    }

    return 0;
}

