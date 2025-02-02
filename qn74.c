#include <stdio.h>

int main() {
    float base, altitude, area;

    printf("Enter the base of the parallelogram: ");
    scanf("%f", &base);

    printf("Enter the altitude of the parallelogram: ");
    scanf("%f", &altitude);

    area = base * altitude;

    printf("The area of the parallelogram is: %.2f\n", area);

    return 0;
}

