int main (){
    int idade;
    int opiniao;

    int qtd_3 = 0;
    int qtd_2 = 0;
    int qtd_1 = 0;

    int idades_1 = 0;
    int idades_2 = 0;
    int idades_3 = 0;

    for (int i =0 ; i < 15 ; i++)
    {
        scanf("%d %d", &idade, &opiniao);
       
        if (opiniao == 3)
        {
            qtd_3++;
            idades_3 += idade;
        }
        else if (opiniao == 2)
        {
            qtd_2++;
            idades_2 += idade;
        }
        else
        {
            qtd_1++;
            idades_1 += idade;
        }
    }

    printf("media de idade das pessoas que responderam otimo: %.2f\n", (float)idades_3/qtd_3);
    printf("quantidade que responderam regular: %d\n", qtd_2);
    printf("percentual de pessoas que responderam bom: %.2f\n", (float)qtd_1/ (qtd_1 + qtd_2 + qtd_3) * 100);
}