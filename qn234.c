#include <stdio.h>

int stringLength(char *str) {
    if (*str == '\0') {
        return 0;
    }
    return 1 + stringLength(str + 1);
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    printf("Length of the string is: %d\n", stringLength(str));

    return 0;
}

