#include <stdio.h>

int main() {
    int total_days, years, weeks, days;

    printf("Enter the number of days: ");
    scanf("%d", &total_days);

    years = total_days / 365;
    weeks = (total_days % 365) / 7;
    days = (total_days % 365) % 7;

    printf("%d days is equivalent to %d years, %d weeks, and %d days.\n", total_days, years, weeks, days);

    return 0;
}

