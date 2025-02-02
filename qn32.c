#include <stdio.h>

int main() {
    float basicSalary, da, hra, ta, other, grossSalary, pf, it, netSalary;

    printf("Enter the Basic Salary: ");
    scanf("%f", &basicSalary);

    printf("Enter the Dearness Allowance (DA): ");
    scanf("%f", &da);

    printf("Enter the House Rent Allowance (HRA): ");
    scanf("%f", &hra);

    printf("Enter the Travel Allowance (TA): ");
    scanf("%f", &ta);

    printf("Enter other allowances: ");
    scanf("%f", &other);

    grossSalary = basicSalary + da + hra + ta + other;

    pf = grossSalary * 0.12; 
    it = grossSalary * 0.10;

    netSalary = grossSalary - pf - it;

    printf("Gross Salary: %.2f\n", grossSalary);
    printf("Provident Fund Deduction (PF): %.2f\n", pf);
    printf("Income Tax Deduction (IT): %.2f\n", it);
    printf("Net Salary: %.2f\n", netSalary);

    return 0;
}

