#include <stdio.h>
#include <math.h>

int main() {
    int m, n;
    float sumOfSquares = 0.0, normal;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    int matrix[m][n];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            sumOfSquares += matrix[i][j] * matrix[i][j]; 
        }
    }

    normal = sqrt(sumOfSquares);  
    printf("The normal of the matrix is: %.2f\n", normal);

    return 0;
}

