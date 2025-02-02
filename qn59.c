#include <stdio.h>

int main() {
    char ch;

    printf("Enter a lowercase character: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z') {
        ch = ch - ('a' - 'A');
        printf("The uppercase character is: %c\n", ch);
    } else {
        printf("The entered character is not a lowercase letter.\n");
    }

    return 0;
}

