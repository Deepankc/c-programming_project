#include <stdio.h>
#include <string.h>

void getSubstring(char str[], int start, int length) {
    char sub[length + 1];
    int i;
    for(i = 0; i < length; i++) {
        sub[i] = str[start + i];
    }
    sub[length] = '\0';
    printf("Substring: %s\n", sub);
}

int main() {
    char str[] = "Hello, World!";
    getSubstring(str, 7, 5);
    return 0;
}

