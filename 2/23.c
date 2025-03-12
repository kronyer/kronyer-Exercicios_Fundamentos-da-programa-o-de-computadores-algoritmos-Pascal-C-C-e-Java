int main(){
    double sal_min, horas_trabalhadas;
    char turno, categoria;

    printf("Digite o salário mínimo: ");
    scanf("%lf", &sal_min);
    printf("Digite o número de horas trabalhadas: ");
    scanf("%lf", &horas_trabalhadas);
    printf("Digite o turno (M, V ou N): ");
    scanf(" %c", &turno);
    printf("Digite a categoria (O ou G): ");
    scanf(" %c", &categoria);
    
    double sal_bruto = 0;
    
    double coef;
    if (turno == "M")
    {
        coef = 0.1 * sal_min;
    }
    else if (turno == "V")
    {
        coef = 0.15 * sal_min;
    }
    else if (turno == "N")
    {
        coef = 0.12 * sal_min;
    }
    
    sal_bruto = horas_trabalhadas * coef;
    printf("Salário bruto: %.2lf\n", sal_bruto);

    double imposto = 0;
    if(categoria == "O")
    {
        if (sal_bruto >= 300)
        {
            imposto = sal_bruto * 0.05;
        }
        else if (sal_bruto >= 400)
        {
            imposto = sal_bruto * 0.03;
        }
    }

    printf("Imposto: %.2lf\n", imposto);

    double grat = 0;
    if (turno == "N" && horas_trabalhadas > 80)
    {
        grat = 50;
    }
    else
    {
        grat = 30;
    }

    printf("Gratificação: %.2lf\n", grat);

    double aux = 0;
    if (categoria == "O" || coef < 25)
    {
        aux = 1/3 * sal_bruto;
    } else{
        aux = 1/2 * sal_bruto;
    }

    printf("salMin: %.2lf\n", sal_min);

    double sal_liquido = sal_bruto - imposto + grat + aux;
    printf("Salário líquido: %.2lf\n", sal_liquido);

    if (sal_liquido < 350)
    {
        printf("Mal remunerado\n");
    }
    else if (sal_liquido < 600)
    {
        printf("Normal\n");
    }
    else
    {
        printf("Bem remunerado\n");
    }
    

}