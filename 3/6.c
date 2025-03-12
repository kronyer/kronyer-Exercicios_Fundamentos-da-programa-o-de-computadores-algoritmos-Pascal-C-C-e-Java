int main (){
    int qtd_funcionarios = 10;
    double sal_min = 450.00;

    char turno;
    char categoria;
    double salario =0;
    double valor_hora = 0;
    int horas_trabalhadas = 0;
    double salario_com_aux =0;


    for (int i = 0; i < qtd_funcionarios; i++)
    {
        printf("Digite a categoria\n");
        scanf("%s %s", categoria);
        while (categoria != 'G' || categoria != 'O')
        {
            printf("Categoria invalida\n");
            printf("Digite novamente\n");
            scanf("%s", categoria);
        }
        printf("Qual o turno\n");
        scanf("%s", turno);
        while (turno != 'M' || turno != 'V' || turno != 'N')
        {
            printf("Turno invalido\n");
            printf("Digite novamente\n");
            scanf("%s", turno);
        }

        printf("horas trabalhadas\n");
        scanf("%d", horas_trabalhadas);


        if (categoria == 'G')
        {
            if (turno == 'N')
            {
                valor_hora = sal_min * 0.18;
            } else{
                valor_hora = sal_min * 0.15;
            }
        } else{
            if (turno == 'N')
            {
                valor_hora = sal_min * 0.13;
            } else{
                valor_hora = sal_min * 0.10;
            }
        }

        salario = valor_hora * horas_trabalhadas;
        printf("%.2lf\n", salario);

        if (salario <= 300)
        {
            salario_com_aux = salario + 0.2 * salario;
        } else if (salario > 300 && salario <= 600)
        {
            salario_com_aux = salario + 0.15 * salario;
        } else{
            salario_com_aux = salario + 0.05 * salario;
        }

        printf("%.2lf\n", salario_com_aux);
        
    }
}