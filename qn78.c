#include <stdio.h>
#include <math.h>

int main() {
    float length, width, height, surfaceArea, volume, spaceDiagonal;

    printf("Enter the length of the cuboid: ");
    scanf("%f", &length);

    printf("Enter the width of the cuboid: ");
    scanf("%f", &width);

    printf("Enter the height of the cuboid: ");
    scanf("%f", &height);

    surfaceArea = 2 * (length * width + width * height + height * length); 
    volume = length * width * height; 
    spaceDiagonal = sqrt(length * length + width * width + height * height);  

    printf("The surface area of the cuboid is: %.2f\n", surfaceArea);
    printf("The volume of the cuboid is: %.2f\n", volume);
    printf("The space diagonal of the cuboid is: %.2f\n", spaceDiagonal);

    return 0;
}

