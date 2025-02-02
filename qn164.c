#include <stdio.h>

int main() {
    char letter = 'a';
    printf("Lowercase alphabets from a to z are:\n");
    while (letter <= 'z') {
        printf("%c ", letter);
        letter++;
    }

    return 0;
}

