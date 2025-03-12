#include <stdio.h>
#include <math.h>

int main()
{
    int horas_trabalhadas;
    double salario_hora, sal_minimo, salario_bruto, salario_liquido, imposto;

    printf("Digite o numero de horas trabalhadas: ");
    scanf("%d", &horas_trabalhadas);

    salario_hora = 0.5 * sal_minimo;

    salario_bruto = horas_trabalhadas * salario_hora;
    imposto = salario_bruto * 0.03;

    salario_liquido = salario_bruto - imposto;

}