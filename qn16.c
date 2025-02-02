#include <stdio.h>

int main() {
    char c;
    int i;
    float f;
    double d;
    long l;

    printf("Size of char: %lu bytes\n", sizeof(c));
    printf("Size of int: %lu bytes\n", sizeof(i));
    printf("Size of float: %lu bytes\n", sizeof(f));
    printf("Size of double: %lu bytes\n", sizeof(d));
    printf("Size of long: %lu bytes\n", sizeof(l));

    return 0;
}

