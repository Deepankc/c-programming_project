#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int sum = 0;

    printf("Enter an alphanumeric string: ");
    fgets(str, sizeof(str), stdin);
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (isdigit(str[i])) {
            sum += str[i] - '0';  
        }
    }

    printf("The sum of all digits in the string is: %d\n", sum);

    return 0;
}

