int main (){
    char nomes_produtos[10][50] = {"Arroz", "Feijão", "Macarrão", "Carne", "Frango", "Peixe", "Leite", "Ovos", "Farinha", "Açúcar"};
    int codigos_produtos[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    double precos_produtos[10] = {5.0, 4.0, 3.0, 20.0, 15.0, 10.0, 3.5, 5.0, 2.0, 2.5};


    for (int i = 0; i < 10; i++)
    {

        if(codigos_produtos[i] % 2 == 0 && precos_produtos[i] > 1000)
        {
            precos_produtos[i] = precos_produtos[i] * 1.2;
        } else if (codigos_produtos[i] % 2 == 0)
        {
            precos_produtos[i] = precos_produtos[i] * 1.15;
        }
        else if (precos_produtos[i] > 1000)
        {
            precos_produtos[i] = precos_produtos[i] * 1.1;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("Produto: %s\n", nomes_produtos[i]);
        printf("Código: %d\n", codigos_produtos[i]);
        printf("Preço: %.2lf\n", precos_produtos[i]);
    }
    
}