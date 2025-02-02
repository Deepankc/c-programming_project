#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    gets(str);

    printf("String in hexadecimal: ");
    for(i = 0; str[i] != '\0'; i++) {
        printf("%X ", str[i]);
    }
    printf("\n");

    return 0;
}

