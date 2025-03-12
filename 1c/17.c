#include <stdio.h>
#include <math.h>

int main()
{
    double salario, cheque1, cheque2, cpmf1, cpmf2, saldo;

    printf("Digite o valor do salário: ");
    scanf("%lf", &salario);

    printf("Digite o valor do primeiro cheque: ");
    scanf("%lf", &cheque1);
    cpmf1 = cheque1 * 0.38 / 100;

    printf("Digite o valor do segundo cheque: ");
    scanf("%lf", &cheque2);
    cpmf2 = cheque2 * 0.38 / 100;

    saldo = salario - cheque1 - cpmf1 - cheque2 - cpmf2;
    printf("Saldo final: %.2lf\n", saldo);
}