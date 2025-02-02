#include <stdio.h>

int main() {
    float x, y;

    printf("Enter x coordinate: ");
    scanf("%f", &x);

    printf("Enter y coordinate: ");
    scanf("%f", &y);

    if(x > 0 && y > 0)
        printf("Point is in Quadrant I\n");
    else if(x < 0 && y > 0)
        printf("Point is in Quadrant II\n");
    else if(x < 0 && y < 0)
        printf("Point is in Quadrant III\n");
    else if(x > 0 && y < 0)
        printf("Point is in Quadrant IV\n");
    else if(x == 0 && y != 0)
        printf("Point lies on Y-axis\n");
    else if(x != 0 && y == 0)
        printf("Point lies on X-axis\n");
    else
        printf("Point lies at the origin\n");

    return 0;
}

