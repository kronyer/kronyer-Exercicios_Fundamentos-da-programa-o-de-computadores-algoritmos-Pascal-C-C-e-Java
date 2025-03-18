int main (){
    int canal;

    int qtd_total = 0;

    int qtd_canal_4 = 0;
    int qtd_canal_5 = 0;
    int qtd_canal_7 = 0;
    int qtd_canal_12 = 0;
    do
    {
        scanf("%d", &canal);
        if (canal == 0)
        {
            break;
        }
        qtd_total++;
        if (canal == 4)
        {
            qtd_canal_4++;
        }
        else if (canal == 5)
        {
            qtd_canal_5++;
        }
        else if (canal == 7)
        {
            qtd_canal_7++;
        }
        else if (canal == 12)
        {
            qtd_canal_12++;
        }
    } while (canal !=0);

    
    printf("Quantidade de pessoas que assistiram ao canal 4: %d\n", qtd_canal_4);
    printf("Quantidade de pessoas que assistiram ao canal 5: %d\n", qtd_canal_5);
    printf("Quantidade de pessoas que assistiram ao canal 7: %d\n", qtd_canal_7);
    printf("Quantidade de pessoas que assistiram ao canal 12: %d\n", qtd_canal_12);
    printf("Percentual de pessoas que assistiram ao canal 4: %.2f\n", (float)qtd_canal_4/qtd_total * 100);
    printf("Percentual de pessoas que assistiram ao canal 5: %.2f\n", (float)qtd_canal_5/qtd_total * 100);
    printf("Percentual de pessoas que assistiram ao canal 7: %.2f\n", (float)qtd_canal_7/qtd_total * 100);
    printf("Percentual de pessoas que assistiram ao canal 12: %.2f\n", (float)qtd_canal_12/qtd_total * 100);
    
}