#include <stdio.h>

int main() {
    float kilometers, meters, centimeters, feet, inches;

    printf("Enter the distance between two cities in kilometers: ");
    scanf("%f", &kilometers);

    meters = kilometers * 1000;
    centimeters = meters * 100;
    feet = kilometers * 3280.84;
    inches = feet * 12;

    printf("Distance in meters: %.2f\n", meters);
    printf("Distance in centimeters: %.2f\n", centimeters);
    printf("Distance in feet: %.2f\n", feet);
    printf("Distance in inches: %.2f\n", inches);

    return 0;
}

