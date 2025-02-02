#include <stdio.h>

void copyString(char *src, char *dest) {
    if (*src == '\0') {
        *dest = '\0';
        return;
    }
    
    *dest = *src;
    copyString(src + 1, dest + 1);
}

int main() {
    char str[100], copiedStr[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    copyString(str, copiedStr);
    
    printf("Copied string is: %s\n", copiedStr);

    return 0;
}

