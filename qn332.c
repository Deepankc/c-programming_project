#include <stdio.h>

int main() {
    int n;

    printf("Enter size of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Lower diagonal elements of the matrix:\n");
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            printf("%d ", matrix[i][j]);
        }
    }
    printf("\n");

    return 0;
}

