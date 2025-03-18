int main (){
    char acao;
    int qtd_lucro_mais_1000 = 0;
    int qtd_lucro_menos_200 = 0;
    double lucro;
    double lucro_total = 0;
    do
    {
        if (acao = 'f')
        {
            break;
        }

        double venda;
        double custo;

        printf("Digite o valor de venda e o custo: ");
        scanf("%lf %lf", &venda, &custo);

        lucro = venda - custo;

        if (lucro > 1000)
        {
            qtd_lucro_mais_1000++;
        }
        else if (lucro < 200)
        {
            qtd_lucro_menos_200++;
        }

        printf("Lucro de %d: %.2f\n",acao, lucro);

        lucro_total += lucro;
    } while (acao = 'f');

    printf("Quantidade de produtos com lucro maior que 1000: %d\n", qtd_lucro_mais_1000);
    printf("Quantidade de produtos com lucro menor que 200: %d\n", qtd_lucro_menos_200);
    printf("Lucro total: %.2f\n", lucro_total);
    return 0;
    
}