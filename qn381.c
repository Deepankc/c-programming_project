#include <stdio.h>

struct Employee {
    int emp_id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp = {101, "John Doe", 50000.0};
    struct Employee *ptr = &emp;

    printf("Employee ID: %d\n", ptr->emp_id);
    printf("Employee Name: %s", ptr->name);
    printf("Employee Salary: %.2f\n", ptr->salary);

    return 0;
}

