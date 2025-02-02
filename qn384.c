#include <stdio.h>

struct Student {
    int roll_no;
    char name[50];
};

int main() {
    struct Student students[3] = {
        {101, "John"},
        {102, "Alice"},
        {103, "Bob"}
    };

    for (int i = 0; i < 3; i++) {
        printf("Student %d - Roll No: %d, Name: %s\n", i+1, students[i].roll_no, students[i].name);
    }

    return 0;
}

