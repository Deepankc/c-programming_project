#include <stdio.h>

int main() {
    float basic_salary, hra, da, pf, gross_salary;
    printf("Enter the basic salary of the employee: ");
    scanf("%f", &basic_salary);
    hra = 0.20 * basic_salary; 
    da = 0.50 * basic_salary;  
    pf = 0.12 * basic_salary;  
    gross_salary = basic_salary + hra + da - pf;
    printf("\nBasic Salary: %.2f", basic_salary);
    printf("\nHRA (20%%): %.2f", hra);
    printf("\nDA (50%%): %.2f", da);
    printf("\nProvident Fund (12%%): %.2f", pf);
    printf("\nGross Salary: %.2f\n", gross_salary);
    return 0;
}

