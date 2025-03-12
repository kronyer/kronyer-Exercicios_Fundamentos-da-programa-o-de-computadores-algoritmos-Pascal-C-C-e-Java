#include <stdio.h>

int main(){
    double salary;

    printf("Enter your salary: ");
    scanf("%lf", &salary);

    double new_salary = 0;
    double salary_raise = 0;

    if (salary <= 300)
    {
        salary_raise = 0.15;
    }
    else if (salary < 600)
    {
        salary_raise = 0.1;
    }
    else if (salary <= 900)
    {
        salary_raise = 0.05;
    }
    else
    {
        salary_raise = 0;
    }

    new_salary = salary + (salary * salary_raise);
    printf("The new salary is: %.2lf", new_salary);
}