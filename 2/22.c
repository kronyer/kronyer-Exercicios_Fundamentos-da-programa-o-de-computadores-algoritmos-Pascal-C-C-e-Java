int main (){
    double sal_base, temp_serv;

    printf("Digite o salário base: ");
    scanf("%lf", &sal_base);
    printf("Digite o tempo de serviço: ");
    scanf("%lf", &temp_serv);

    double imposto = 0;
    if (sal_base < 200)
    {
        imposto = 0;
    }
    else if ( sal_base <= 450)
    {
        imposto = sal_base * 0.03;
    }
    else if ( sal_base < 700)
    {
        imposto = sal_base * 0.08;
    }
    else
    {
        imposto = sal_base * 0.12;
    }
    

    double gratificacao = 0;
    if (sal_base > 500)
    {
        if (temp_serv < 3)
        {
            gratificacao = 20;
        }
        else
        {
            gratificacao = 30;
        }
    }

    else if (sal_base <= 500)
    {
        if (temp_serv < 3)
        {
            gratificacao = 23;
        }
        else if (temp_serv <= 6)
        {
            gratificacao = 35;
        }
        else
        {
            gratificacao = 33;
        }
    }
}