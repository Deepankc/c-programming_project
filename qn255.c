#include <stdio.h>


void printSum(int a, int b) {
    printf("The sum of %d and %d is: %d\n", a, b, a + b);
}

int main() {
    int num1, num2;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    printSum(num1, num2);
    
    return 0;
}

