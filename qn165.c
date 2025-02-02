#include <stdio.h>

int main() {
    int N;
    printf("Enter a number N: ");
    scanf("%d", &N);

    int i = 1;
    printf("Numbers from 1 to %d are:\n", N);
    while (i <= N) {
        printf("%d ", i);
        i++;
    }

    return 0;
}

