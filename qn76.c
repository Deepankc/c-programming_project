#include <stdio.h>

int main() {
    float side, volume;

    printf("Enter the length of the side of the cube: ");
    scanf("%f", &side);

    volume = side * side * side; 

    printf("The volume of the cube is: %.2f\n", volume);

    return 0;
}

