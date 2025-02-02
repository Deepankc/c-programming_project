#include <stdio.h>

int main() {
    int n, trace = 0;

    printf("Enter size of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        trace += matrix[i][i]; 
    }

    printf("The trace of the matrix is: %d\n", trace);

    return 0;
}

