#include <stdio.h>

struct Employee {
    int emp_id;
    char name[50];
    float salary;
};

void printEmployeeDetails(struct Employee *ptr) {
    printf("Employee ID: %d\n", ptr->emp_id);
    printf("Employee Name: %s", ptr->name);
    printf("Employee Salary: %.2f\n", ptr->salary);
}

int main() {
    struct Employee emp = {101, "John Doe", 50000.0};
    printEmployeeDetails(&emp);

    return 0;
}

