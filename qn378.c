#include <stdio.h>

struct Student {
    int roll_no;
    char name[50];
    float marks;
};

int main() {
    struct Student student1 = {101, "John Doe", 85.5};

    printf("Student Roll No: %d\n", student1.roll_no);
    printf("Student Name: %s\n", student1.name);
    printf("Student Marks: %.2f\n", student1.marks);

    return 0;
}

