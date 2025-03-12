int main (){
    int cod_prod, cod_pais;
    double peso_prod;

    printf("Digite o código do produto: ");
    scanf("%d", &cod_prod);
    printf("Digite o código do país de origem: ");
    scanf("%d", &cod_pais);
    printf("Digite o peso do produto: ");
    scanf("%lf", &peso_prod);

    double preco_prod = 0;
    if (cod_prod <= 4)
    {
        preco_prod = 10 * (peso_prod * 1000); //because its in kg's

        if (cod_pais == 1)
        {
            preco_prod = preco_prod ;
        }
        else if (cod_pais == 2)
        {
            preco_prod = preco_prod + (preco_prod * 0.15);
        }
        else if (cod_pais == 3)
        {
            preco_prod = preco_prod + (preco_prod * 0.25);
        }
    }
    else if (cod_prod <= 7)
    {
        preco_prod = 25 * (peso_prod * 1000); //because its in kg's

        if (cod_pais == 1)
        {
            preco_prod = preco_prod ;
        }
        else if (cod_pais == 2)
        {
            preco_prod = preco_prod + (preco_prod * 0.15);
        }
        else if (cod_pais == 3)
        {
            preco_prod = preco_prod + (preco_prod * 0.25);
        }
    }
    else if (cod_prod <= 10)
    {
        preco_prod = 35 * (peso_prod * 1000); //because its in kg's

        if (cod_pais == 1)
        {
            preco_prod = preco_prod ;
        }
        else if (cod_pais == 2)
        {
            preco_prod = preco_prod + (preco_prod * 0.15);
        }
        else if (cod_pais == 3)
        {
            preco_prod = preco_prod + (preco_prod * 0.25);
        }
    }

}