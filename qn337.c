#include <stdio.h>

int main() {
    int m, n, row1, row2;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    int matrix[m][n];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Enter the row numbers to interchange (1-based index): ");
    scanf("%d %d", &row1, &row2);

    row1--;
    row2--;

    for (int i = 0; i < n; i++) {
        int temp = matrix[row1][i];
        matrix[row1][i] = matrix[row2][i];
        matrix[row2][i] = temp;
    }

    printf("Matrix after interchanging rows %d and %d:\n", row1+1, row2+1);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

