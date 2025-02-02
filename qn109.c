#include <stdio.h>

int main() {
    char name1[100], name2[100];
    int loveScore;

    printf("Enter your name: ");
    scanf("%s", name1);
    printf("Enter your partner's name: ");
    scanf("%s", name2);

    loveScore = (strlen(name1) + strlen(name2)) % 100;

    printf("Love Score between %s and %s is: %d%%\n", name1, name2, loveScore);
    return 0;
}

