int main (){
    int idade;

    int fx_1 = 0;
    int fx_2 = 0;
    int fx_3 = 0;
    int fx_4 = 0;
    int fx_5 = 0;

    int total = 0;
    for (int i =0; i <= 8; i++)
    {
        printf("Digite a idade: ");
        scanf("%d", &idade);


        if (idade <= 15)
        {
            fx_1++;
        }
        else if (idade <= 30)
        {
            fx_2++;
        }
        else if (idade <= 45)
        {
            fx_3++;
        }
        else if (idade <= 60)
        {
            fx_4++;
        }
        else
        {
            fx_5++;
        }

        total++;
    }

    printf("Faixa etaria\tQuantidade\tPercentual\n");
    printf("0-15\t\t%d\t\t%.2f%%\n", fx_1, (float)fx_1/total*100);
    printf("16-30\t\t%d\t\t%.2f%%\n", fx_2, (float)fx_2/total*100);
    printf("31-45\t\t%d\t\t%.2f%%\n", fx_3, (float)fx_3/total*100);
    printf("46-60\t\t%d\t\t%.2f%%\n", fx_4, (float)fx_4/total*100);
    printf("61+\t\t%d\t\t%.2f%%\n", fx_5, (float)fx_5/total*100);
}