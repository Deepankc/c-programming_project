#include <stdio.h>
#include <string.h>

int main() {
    char str[100], word[50];
    int count = 0, i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    printf("Enter a word to find its frequency: ");
    fgets(word, sizeof(word), stdin);
    
    int wordLength = strlen(word);
    int strLength = strlen(str);
    
    for (i = 0; i <= strLength - wordLength; i++) {
        for (j = 0; j < wordLength - 1; j++) {
            if (str[i + j] != word[j]) {
                break;
            }
        }
        
        if (j == wordLength - 1) {
            count++;
        }
    }

    printf("The frequency of the word '%s' in the string is: %d\n", word, count);
    
    return 0;
}

