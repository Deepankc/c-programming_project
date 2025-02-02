#include <stdio.h>

int main() {
    float basicSalary, employeeContribution, employerContribution;

    printf("Enter the basic salary of the employee: ");
    scanf("%f", &basicSalary);

    employeeContribution = basicSalary * 0.12;
    employerContribution = basicSalary * 0.12;

    printf("Employee Provident Fund Contribution: %.2f\n", employeeContribution);
    printf("Employer Provident Fund Contribution: %.2f\n", employerContribution);

    return 0;
}

