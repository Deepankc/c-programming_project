#include <stdio.h>

int main() {
    int choice;
    float temperature, converted_temp;

    printf("Temperature Conversion Menu:\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temperature);
        converted_temp = (temperature - 32) * 5 / 9;
        printf("Temperature in Celsius: %.2f°C\n", converted_temp);
    } 
    else if (choice == 2) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temperature);
        converted_temp = (temperature * 9 / 5) + 32;
        printf("Temperature in Fahrenheit: %.2f°F\n", converted_temp);
    } 
    else {
        printf("Invalid choice! Please enter 1 or 2.\n");
    }

    return 0;
}

