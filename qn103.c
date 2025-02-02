#include <stdio.h>

int main() {
    char ch;
    int i, j, n = 5;

    for(i = 1; i <= n; i++) {
        ch = 'A'; 
        for(j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }

    return 0;
}

