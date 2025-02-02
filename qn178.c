#include <stdio.h>

int main() {
    int baby = 0, school = 0, adult = 0, age;
    int i = 1;

    while (i <= 15) {
        printf("Enter age of person %d: ", i);
        scanf("%d", &age);

        if (age <= 2) {
            baby++;
        } else if (age <= 18) {
            school++;
        } else {
            adult++;
        }

        i++;
    }

    printf("Total Baby age count: %d\n", baby);
    printf("Total School age count: %d\n", school);
    printf("Total Adult age count: %d\n", adult);

    return 0;
}

