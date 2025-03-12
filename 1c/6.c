#include <stdio.h>

int main()
{
 float salary, new_salary, increase;

    printf("Digite o salário: ");
    scanf("%f", &salary);
    printf("Digite o aumento: ");
    scanf("%f", &increase);

    new_salary = salary + (salary * increase / 100);

    printf("O novo salário é: %.2f", new_salary);
    return 0;
}