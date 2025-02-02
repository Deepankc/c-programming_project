#include <stdio.h>

int main() {
    char letter = 'A';
    printf("Uppercase alphabets from A to Z are:\n");
    while (letter <= 'Z') {
        printf("%c ", letter);
        letter++;
    }

    return 0;
}

