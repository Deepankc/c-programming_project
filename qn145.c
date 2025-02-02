#include <stdio.h>

int isPalindrome(int num) {
    int reversed = 0, originalNum, remainder;
    originalNum = num;

    while (num != 0) {
        remainder = num & 1;
        reversed = (reversed << 1) | remainder;
        num >>= 1;
    }
    
    return originalNum == reversed;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num))
        printf("The number is a palindrome.\n");
    else
        printf("The number is not a palindrome.\n");

    return 0;
}

