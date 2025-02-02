#include <stdio.h>
#include <ctype.h>

void capitalizeFirstLetter(char str[]) {
    int i = 0;

    
    if (str[i] != '\0' && isalpha(str[i])) {
        str[i] = toupper(str[i]);
    }

   
    while (str[i] != '\0') {
        if (str[i] == ' ' && str[i+1] != '\0' && isalpha(str[i+1])) {
            str[i+1] = toupper(str[i+1]);
        }
        i++;
    }
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    capitalizeFirstLetter(str);

    printf("String with capitalized first letters of each word: %s\n", str);

    return 0;
}

