#include <stdio.h>
#include <string.h>

void removeConsecutiveRepeats(char str[]) {
    int i, j = 0;
    int len = strlen(str);
    char temp[len + 1];

    for(i = 0; i < len; i++) {
        if(i == 0 || str[i] != str[i-1]) {
            temp[j++] = str[i];
        }
    }
    temp[j] = '\0';
    strcpy(str, temp);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    removeConsecutiveRepeats(str);

    printf("String after removing consecutive characters: %s\n", str);
    return 0;
}

