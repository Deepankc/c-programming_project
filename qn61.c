#include <stdio.h>

int main() {
    char ch;

    printf("Punctuation marks in C:\n");

    // Loop to print all punctuation marks
    for (ch = 33; ch <= 47; ch++) {
        printf("%c ", ch);
    }
    for (ch = 58; ch <= 64; ch++) {
        printf("%c ", ch);
    }
    for (ch = 91; ch <= 96; ch++) {
        printf("%c ", ch);
    }
    for (ch = 123; ch <= 126; ch++) {
        printf("%c ", ch);
    }

    printf("\n");
    return 0;
}

