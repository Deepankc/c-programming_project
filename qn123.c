#include <stdio.h>

int main() {
    char hexStr[10];
    int num;

    printf("Enter a hexadecimal number: ");
    scanf("%s", hexStr);

    sscanf(hexStr, "%x", &num);

    printf("Integer value: %d\n", num);
    return 0;
}

