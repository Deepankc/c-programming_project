#include <stdio.h>

int replaceBit(int num1, int num2, int pos) {
    num1 &= ~(1 << pos);         
    num1 |= ((num2 >> pos) & 1) << pos; 
    return num1;
}

int main() {
    int num1, num2, pos;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    printf("Enter the position to replace: ");
    scanf("%d", &pos);

    printf("Result after replacing bit: %d\n", replaceBit(num1, num2, pos));

    return 0;
}

