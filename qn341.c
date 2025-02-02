#include <stdio.h>

int main() {
    int m, n, evenCount = 0;

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
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] % 2 == 0) {
                evenCount++;
            }
        }
    }

    printf("Frequency of even numbers in the matrix: %d\n", evenCount);

    return 0;
}

