#include <stdio.h>

int main()
{
 float deposit, interest,income, total;

  printf("Digite o deposito: ");
    scanf("%f", &deposit);

    interest = 10;

    income = deposit * interest/100;
    total = deposit + income;
    printf("O total eh: %.2f", total);
    printf("\nO juros eh: %.2f", income);
}