int main (){
    int cod = 0;
    char sexo;
    double horas_dadas;

    double salario = 0;
    double salario_liquido = 0;


    while (cod != 9999)
    {
        scanf("%d", &cod);

        if (cod == 9999)
        {
            break;
        }

        scanf(" %c", &sexo);
        scanf("%lf", &horas_dadas);

        if (sexo == 'F')
        {
            printf("CODIGO = %d\n", cod);
            printf("SEXO = Feminino\n");
            printf("TOTAL DE HORAS = %.2lf\n", horas_dadas);
            salario = horas_dadas * 30;
            printf("SALARIO = %.2lf\n", horas_dadas * 30);
            salario_liquido = salario - (salario * 0.1);
            printf("SALARIO LIQUIDO = %.2lf\n", horas_dadas * 30);

        }
        else if (sexo == 'M')
        {
            printf("CODIGO = %d\n", cod);
            printf("SEXO = Masculino\n");
            printf("TOTAL DE HORAS = %.2lf\n", horas_dadas);
            salario = horas_dadas * 30;
            printf("SALARIO = %.2lf\n", salario);

            salario_liquido = salario - (salario * 0.05);
            printf("SALARIO LIQUIDO = %.2lf\n", salario_liquido);
        }

    }
}