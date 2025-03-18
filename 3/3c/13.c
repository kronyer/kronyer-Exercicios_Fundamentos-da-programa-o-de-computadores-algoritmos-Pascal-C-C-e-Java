int main (){
    int idade;
    double peso;

    double peso_10 = 0;
    double qtd_10 = 0;

    double peso_20 = 0;
    double qtd_20 = 0;

    double peso_30 = 0;
    double qtd_30 = 0;

    double peso_31P = 0;
    double qtd_31P = 0;

    for (int i =0; i< 15; i++)
    {
        scanf("%d %lf", &idade, &peso);
        
        if (idade <= 10)
        {
            peso_10 += peso;
            qtd_10++;
        }
        else if (idade <= 20)
        {
            peso_20 += peso;
            qtd_20++;
        }
        else if (idade <= 30)
        {
            peso_30 += peso;
            qtd_30++;
        }
        else
        {
            peso_31P += peso;
            qtd_31P++;
        }
    }

    printf("Media de peso de pessoas com ate 10 anos: %.2f\n", peso_10/qtd_10);
    printf("Media de peso de pessoas com 11 a 20 anos: %.2f\n", peso_20/qtd_20);
    printf("Media de peso de pessoas com 21 a 30 anos: %.2f\n", peso_30/qtd_30);

}