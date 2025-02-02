#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
     printf("Punctuation marks in C:\n");
    for (ch = 32; ch <= 126; ch++) {
        if (ispunct(ch)) {
            printf("%c ", ch);
        }
    }

    printf("\n");
    return 0;
}

