#include <stdio.h>
#include <math.h>

int main()
{
    double valor_qw, salario, qw_consumido, valor_total, valor_desconto;

    printf("Digite o valor do salário: ");
    scanf("%lf", &salario);

    valor_qw = salario * 0.2;

    printf("Digite a quantidade de quilowatts consumida: ");
    scanf("%lf", &qw_consumido);

    valor_total = valor_qw * qw_consumido;
    printf("Valor a ser pago: %.2lf\n", valor_total);

    valor_desconto = valor_total * 0.85;
    printf("Valor com desconto: %.2lf\n", valor_desconto);


}