#include <stdio.h>

int isEven(int num) {
    return (num & 1) == 0;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isEven(num))
        printf("The number is even.\n");
    else
        printf("The number is odd.\n");

    return 0;
}

