#include <stdio.h>

int main() {
    char name[50], maritalStatus;

    printf("Enter the name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter marital status (M for Married, S for Single): ");
    scanf("%c", &maritalStatus);

    if (maritalStatus == 'M' || maritalStatus == 'm') {
        printf("Mrs. %s", name);
    } else if (maritalStatus == 'S' || maritalStatus == 's') {
        printf("Miss. %s", name);
    } else {
        printf("Invalid marital status\n");
    }

    return 0;
}

