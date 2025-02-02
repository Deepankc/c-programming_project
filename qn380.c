#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int emp_id;
    char name[50];
    struct Date joining_date;
};

int main() {
    struct Employee emp = {101, "John Doe", {15, 3, 2020}};

    printf("Employee ID: %d\n", emp.emp_id);
    printf("Employee Name: %s", emp.name);
    printf("Joining Date: %d-%d-%d\n", emp.joining_date.day, emp.joining_date.month, emp.joining_date.year);

    return 0;
}

