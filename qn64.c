#include <stdio.h>

int main() {
    char ch;

    printf("Printable characters in C:\n");
    for (ch = 32; ch <= 126; ch++) {
        printf("%c ", ch);
    }

    printf("\n");
    return 0;
}

