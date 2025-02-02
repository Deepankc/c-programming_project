#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
        printf("The character '%c' is alphanumeric.\n", ch);
    } else {
        printf("The character '%c' is not alphanumeric.\n", ch);
    }

    return 0;
}

