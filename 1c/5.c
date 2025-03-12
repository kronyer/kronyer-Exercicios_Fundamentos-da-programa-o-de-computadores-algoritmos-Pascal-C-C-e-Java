#include <stdio.h>

int main()
{
   float salary, new_salary, increase;

    printf("Enter your salary: ");
    scanf("%f", &salary);

    increase = 0.25;
    new_salary = salary + (salary * increase);

    printf("Your new salary is: %.2f\n", new_salary);
}