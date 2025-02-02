#include <stdio.h>

int main() {
    char ch;

    printf("Enter an uppercase character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + ('a' - 'A');
        printf("The lowercase character is: %c\n", ch);
    } else {
        printf("The entered character is not an uppercase letter.\n");
    }

    return 0;
}

