#include <stdio.h>
#include <string.h>

int main() {
    char buffer[50];

    printf("Before memset:\n");
    printf("Buffer content: %s\n", buffer);

    memset(buffer, 'A', sizeof(buffer) - 1);
    buffer[49] = '\0'; 

    printf("After memset:\n");
    printf("Buffer content: %s\n", buffer);

    return 0;
}

