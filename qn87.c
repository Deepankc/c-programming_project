#include <stdio.h>

int main() {
    int year, lastTwoDigits;

    printf("Enter the year: ");
    scanf("%d", &year);

    lastTwoDigits = year % 100;

    printf("The last two digits of the year are: %d\n", lastTwoDigits);

    return 0;
}

