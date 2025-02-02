#include <stdio.h>

int main() {
    int subject1, subject2, subject3, total;
    float percentage;

    printf("Enter marks for three subjects:\n");

    printf("Subject 1: ");
    scanf("%d", &subject1);

    printf("Subject 2: ");
    scanf("%d", &subject2);

    printf("Subject 3: ");
    scanf("%d", &subject3);

    total = subject1 + subject2 + subject3;
    percentage = total / 3;

    printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    if (percentage >= 60) {
        printf("Division: First\n");
    } else if (percentage >= 50) {
        printf("Division: Second\n");
    } else if (percentage >= 40) {
        printf("Division: Third\n");
    } else {
        printf("Division: Fail\n");
    }

    return 0;
}

