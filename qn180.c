#include <stdio.h>

int main() {
    char str1[100], str2[100];
    char *ptr1, *ptr2;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    ptr1 = str1;
    ptr2 = str2;

    int isEqual = 1;
    while (*ptr1 != '\0' && *ptr2 != '\0') {
        if (*ptr1 != *ptr2) {
            isEqual = 0;
            break;
        }
        ptr1++;
        ptr2++;
    }

    if (isEqual && *ptr1 == *ptr2) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    return 0;
}

