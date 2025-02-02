#include <stdio.h>

int main() {
    char ip[20];
    int octet1, octet2, octet3, octet4;

    printf("Enter IP address: ");
    scanf("%s", ip);

    sscanf(ip, "%d.%d.%d.%d", &octet1, &octet2, &octet3, &octet4);

    printf("Extracted octets: %d, %d, %d, %d\n", octet1, octet2, octet3, octet4);
    return 0;
}

