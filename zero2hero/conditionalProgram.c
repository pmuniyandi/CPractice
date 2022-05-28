/*
This is program to test calculate Tax %

5L  = no tax
5 - 10 L -> 15%
10 - 15L -> 20%
15 - 30L -> 25%
> 30 -> 30%
*/
// Emp name, salary (A)
#include<stdio.h>
int main() {
    // declaration -starts
    char emp_name[50]; // array of char - user
    float salary = 0.0; // input data - user
    float tax_per = 0.0;
    float tax = 0.0; // calculated data
    float after_tax = 0.0;
    float monthly_salary = 0.0, monthly_cc = 0.0; // calculated data
    float monthly_tax_deduction = 0.0; // calculated data
    // declaration ends
    // reading -- starts
    printf("Employee Name : ");
    scanf("%s", emp_name); // array refere address by name
    printf("Employee Salary : ");
    scanf("%f", &salary); // array refere address by name
    // reading -- ends
    
    // business logic - starts
    if(salary > 500000 && salary <= 1000000) {
        tax_per = 15;
    } 
    if(salary > 1000000 && salary <= 1500000) {
        tax_per = 20;
    }
    if(salary > 1500000 && salary <= 3000000) {
        tax_per = 25;
    }
    if(salary > 3000000) {
        tax_per = 30;
    }
    tax = (salary * tax_per) / 100.0;
    after_tax = salary - tax;
    monthly_cc = salary / 12.0;
    monthly_salary = after_tax / 12.0;
    monthly_tax_deduction = tax / 12.0;
    // business logic ends

    // to display data to the user - starts
    printf("Yearly component\n\n");
    printf("Employee name : %s\n", emp_name);
    printf("Employee Salary (PA): %.2f\n", salary);
    printf("Employee Tax Per (PA): %.2f\n", tax_per);
    printf("Employee Tax (PA): %.2f\n", tax);
    printf("Monthly component\n\n");
    printf("Employee Salary CC (PM): %.2f\n", monthly_cc);
    printf("Employee Tax Per (PM): %.2f\n", monthly_tax_deduction);
    printf("Employee Salay (Bank Ac) (PA): %.2f\n", monthly_salary);
    // to display data to the user - ends
}