

int main(){

    double sal_min, horas_trabalhadas , horas_extras;
    int num_dependentes;

    printf("Salário mínimo: ");
    scanf("%lf", &sal_min);
    printf("Horas trabalhadas: ");
    scanf("%lf", &horas_trabalhadas);
    printf("Número de dependentes: ");
    scanf("%d", &num_dependentes);
    printf("Horas extras: ");
    scanf("%lf", &horas_extras);

    double valor_hora = sal_min / 5;
    double salario_bruto = valor_hora * horas_trabalhadas;
    double salario_familia = num_dependentes * 32;
    double salario_extra = valor_hora * 1.5 * horas_extras;
    double salario_liquido = salario_bruto + salario_familia + salario_extra;

    printf("Salário bruto: %.2lf\n", salario_bruto);
    printf("Salário família: %.2lf\n", salario_familia);
    printf("Salário extra: %.2lf\n", salario_extra);
    printf("Salário líquido: %.2lf\n", salario_liquido);

    double sal_descontado;

    if (salario_liquido <= 200)
    {
        sal_descontado = 0;
    } else if (salario_liquido <= 500)
    {
        sal_descontado = salario_liquido * 0.1;
    } else
    {
        sal_descontado = salario_liquido * 0.2;
    }

    printf("Salário descontado: %.2lf\n", sal_descontado);

    double sal_gratific;

    if (salario_liquido <= 350)
    {
        sal_gratific = 100;
    } else if (salario_liquido <= 600)
    {
        sal_gratific = 75;
    } else
    {
        sal_gratific = 50;
    }

    printf("Salário gratificado: %.2lf\n", sal_gratific);
}