#include <stdio.h>
#include <math.h>

int main() {
    int n;
    float sum = 0.0, mean, variance = 0.0, stdDeviation;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    float numbers[n];

    for(int i = 0; i < n; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%f", &numbers[i]);
        sum += numbers[i];
    }

    mean = sum / n;

    for(int i = 0; i < n; i++) {
        variance += pow(numbers[i] - mean, 2);
    }

    variance = variance / n;
    stdDeviation = sqrt(variance);

    printf("Mean: %.2f\n", mean);
    printf("Variance: %.2f\n", variance);
    printf("Standard Deviation: %.2f\n", stdDeviation);

    return 0;
}

