#include <stdio.h>

int main() {
    int day, month, year;
    int dateInInteger;

    printf("Enter date (day month year): ");
    scanf("%d %d %d", &day, &month, &year);
    dateInInteger = (year * 10000) + (month * 100) + day;

    printf("Date in integer format: %d\n", dateInInteger);
    return 0;
}

