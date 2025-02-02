#include <stdio.h>
#include <ctype.h>

char firstCapitalLetter(char *str) {
    if (*str == '\0') {
        return '\0';
    }
    
    if (isupper(*str)) {
        return *str;
    }
    
    return firstCapitalLetter(str + 1);
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    char result = firstCapitalLetter(str);
    
    if (result != '\0') {
        printf("The first capital letter is: %c\n", result);
    } else {
        printf("No capital letter found.\n");
    }

    return 0;
}

