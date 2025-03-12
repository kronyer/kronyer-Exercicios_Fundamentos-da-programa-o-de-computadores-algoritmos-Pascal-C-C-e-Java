#include <stdio.h>

int main()
{
float salary, bonus, tax;

printf("Digite o salario: ");
scanf("%f", &salary);
printf("Digite o bonus: ");
scanf("%f", &bonus);
printf("Digite o imposto: ");
scanf("%f", &tax);

salary = salary + (salary * bonus/100) - (salary * tax/100 );
printf("O salario final eh: %.2f", salary);
}