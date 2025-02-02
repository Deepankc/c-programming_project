#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch == ' ' || ch == '\t' || ch == '\n') {
        printf("The character '%c' is a whitespace character.\n", ch);
    } else {
        printf("The character '%c' is not a whitespace character.\n", ch);
    }

    return 0;
}

