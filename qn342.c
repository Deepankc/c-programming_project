#include <stdio.h>

int main() {
    int m, n;
    int mainDiagonalSum = 0, oppositeDiagonalSum = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    int matrix[m][n];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < m; i++) {
        mainDiagonalSum += matrix[i][i];  
        oppositeDiagonalSum += matrix[i][n - i - 1];  
    }

    printf("Sum of main diagonal elements: %d\n", mainDiagonalSum);
    printf("Sum of opposite diagonal elements: %d\n", oppositeDiagonalSum);

    return 0;
}

