#include <stdio.h>

struct Employee {
    int emp_id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp;

    printf("Enter Employee ID: ");
    scanf("%d", &emp.emp_id);
    printf("Enter Employee Name: ");
    getchar();#include <stdio.h>

struct Employee {
    int emp_id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp;

    printf("Enter Employee ID: ");
    scanf("%d", &emp.emp_id);
    printf("Enter Employee Name: ");
    getchar(); 
    fgets(emp.name, sizeof(emp.name), stdin);
    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);

    printf("\nEmployee Details:\n");
    printf("Employee ID: %d\n", emp.emp_id);
    printf("Employee Name: %s", emp.name);
    printf("Employee Salary: %.2f\n", emp.salary);

    return 0;
}

    fgets(emp.name, sizeof(emp.name), stdin);
    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);

    printf("\nEmployee Details:\n");
    printf("Employee ID: %d\n", emp.emp_id);
    printf("Employee Name: %s", emp.name);
    printf("Employee Salary: %.2f\n", emp.salary);

    return 0;
}

