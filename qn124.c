#include <stdio.h>

void printBytes(int n) {
    for(int i = 0; i < sizeof(n); i++) {
        printf("Byte %d: %x\n", i+1, (n >> (i * 8)) & 0xFF);
    }
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    printBytes(num);
    return 0;
}

