#include <stdio.h>

int main()
{
 float salary, bonus, tax;

    printf("Digite o salario: ");
    scanf("%f", &salary);

    bonus = 50;
    tax = 10;

    salary = salary + bonus - (salary * tax/100 );
    printf("O salario final eh: %.2f", salary);
}