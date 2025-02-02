#include <stdio.h>

int main() {
    char str[5][100]; 

     printf("Enter 5 strings:\n");
    for (int i = 0; i < 5; i++) {
        fgets(str[i], sizeof(str[i]), stdin);
    }

    printf("The entered strings are:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s", str[i]);
    }

    return 0;
}

