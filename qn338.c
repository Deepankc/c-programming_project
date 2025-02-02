#include <stdio.h>

int main() {
    int m, n, col1, col2;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    int matrix[m][n];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Enter the column numbers to interchange (1-based index): ");
    scanf("%d %d", &col1, &col2);

    col1--;
    col2--;

    for (int i = 0; i < m; i++) {
        int temp = matrix[i][col1];
        matrix[i][col1] = matrix[i][col2];
        matrix[i][col2] = temp;
    }

    printf("Matrix after interchanging columns %d and %d:\n", col1+1, col2+1);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

