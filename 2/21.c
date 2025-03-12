int main()
{
    int cod_estado, cod_carga;
    double peso_ton;

    printf("Digite o código do estado: ");
    scanf("%d", &cod_estado);
    printf("Digite o código da carga: ");
    scanf("%d", &cod_carga);
    printf("Digite o peso da carga em toneladas: ");
    scanf("%lf", &peso_ton);

    double preco_carga = 0;

    if (cod_carga <= 20)
    {
        preco_carga = 100 * (peso_ton * 1000); //because its in tons

        if (cod_estado == 1){
            preco_carga = preco_carga + (preco_carga * 0.35);
        }
        else if (cod_estado == 2){
            preco_carga = preco_carga + (preco_carga * 0.25);
        }
        else if (cod_estado == 3){
            preco_carga = preco_carga + (preco_carga * 0.15);
        }
        else if (cod_estado == 4)
        {
            preco_carga = preco_carga + (preco_carga * 0.05);
        }
    }
    else if (cod_carga <= 30)
    {
        preco_carga = 250 * (peso_ton * 1000); //because its in tons

        if (cod_estado == 1){
            preco_carga = preco_carga + (preco_carga * 0.35);
        }
        else if (cod_estado == 2){
            preco_carga = preco_carga + (preco_carga * 0.25);
        }
        else if (cod_estado == 3){
            preco_carga = preco_carga + (preco_carga * 0.15);
        }
        else if (cod_estado == 4)
        {
            preco_carga = preco_carga + (preco_carga * 0.05);
        }
    }
    else if (cod_carga <= 40)
    {
        preco_carga = 300 * (peso_ton * 1000); //because its in tons

        if (cod_estado == 1){
            preco_carga = preco_carga + (preco_carga * 0.35);
        }
        else if (cod_estado == 2){
            preco_carga = preco_carga + (preco_carga * 0.25);
        }
        else if (cod_estado == 3){
            preco_carga = preco_carga + (preco_carga * 0.15);
        }
        else if (cod_estado == 4)
        {
            preco_carga = preco_carga + (preco_carga * 0.05);
        }
    }
}