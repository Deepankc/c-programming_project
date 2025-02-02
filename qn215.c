#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            printf("The first capital letter is: %c\n", str[i]);
            return 0;
        }
    }
    
    printf("No capital letter found.\n");

    return 0;
}

