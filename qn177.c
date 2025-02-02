#include <stdio.h>

int main() {
    printf("Uppercase alphabets: ");
    for (char c = 'A'; c <= 'Z'; c++) {
        printf("%c ", c);
    }

    printf("\nLowercase alphabets: ");
    for (char c = 'a'; c <= 'z'; c++) {
        printf("%c ", c);
    }

    return 0;
}

