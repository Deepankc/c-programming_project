#include <stdio.h>
#include <math.h>

int main() {
    int N;
    printf("Enter a number N: ");
    scanf("%d", &N);

    printf("Armstrong numbers from 1 to %d are:\n", N);

    for (int num = 1; num <= N; num++) {
        int sum = 0, temp, remainder, digits = 0;

        temp = num;
        while (temp != 0) {
            digits++;
            temp /= 10;
        }

        temp = num;
        while (temp != 0) {
            remainder = temp % 10;
            sum += pow(remainder, digits);
            temp /= 10;
        }

        if (sum == num) {
            printf("%d ", num);
        }
    }

    return 0;
}

