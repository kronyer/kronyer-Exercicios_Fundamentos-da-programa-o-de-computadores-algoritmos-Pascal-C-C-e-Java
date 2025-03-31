int main (){
    int total_vendas[10] = {4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    int percentual[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    int maior_venda = 0;
    int vendedor_maior_venda = 0;

    int menor_venda = 1000000;
    int vendedor_menor_venda = 0;

    for (int i = 0; i < 10; i++)
    {
        if (total_vendas[i] > 10)
        {
            printf("Vendedor %d recebeu um bônus de %d%%\n", i, percentual[i]);

            if (total_vendas[i] > maior_venda)
            {
                maior_venda = total_vendas[i];
                vendedor_maior_venda = i;
            }

            if (total_vendas[i] < menor_venda)
            {
                menor_venda = total_vendas[i];
                vendedor_menor_venda = i;
            }
        }
    }

    printf("Vendedor com maior venda: %d\n", vendedor_maior_venda);
    printf("Vendedor com menor venda: %d\n", vendedor_menor_venda);

    
}