#include <stdio.h>

void multiplyMatrices(int m, int n, int p, int matrix1[m][n], int matrix2[n][p], int result[m][p], int i, int j, int k) {
    if (i < m) {
        if (j < p) {
            result[i][j] = 0;
            for (k = 0; k < n; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
            multiplyMatrices(m, n, p, matrix1, matrix2, result, i, j + 1, k);
        } else {
            multiplyMatrices(m, n, p, matrix1, matrix2, result, i + 1, 0, k);
        }
    }
}

int main() {
    int m, n, p;

    printf("Enter number of rows and columns of first matrix: ");
    scanf("%d %d", &m, &n);

    printf("Enter number of columns of second matrix: ");
    scanf("%d", &p);

    int matrix1[m][n], matrix2[n][p], result[m][p];

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    multiplyMatrices(m, n, p, matrix1, matrix2, result, 0, 0, 0);

    printf("Result of multiplication:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

