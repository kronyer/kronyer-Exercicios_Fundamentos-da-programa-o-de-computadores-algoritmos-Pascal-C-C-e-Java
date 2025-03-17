int main (){

int idade;
double peso, altura;
int qtde_pessoas = 0;

int qtd_pessoas_acima_50_anos = 0;
int qtd_pessoas_entre_10_20_anos = 0;
double soma_altura_pessoas_10_20_anos = 0;
double media_altura_pessoas_10_20_anos = 0;

int qtd_peso_menos_40kg = 0;

    for (int i =0; i<= 5; i++)
    {
        scanf("%d %lf %lf", &idade, &peso, &altura);

        if (idade > 50)
        {
            qtd_pessoas_acima_50_anos++;
        }
        else if (idade >= 10 && idade <= 20)
        {
            qtd_pessoas_entre_10_20_anos++;
            soma_altura_pessoas_10_20_anos += altura;
        }

        if (peso < 40)
        {
            qtd_peso_menos_40kg++;
        }

        qtde_pessoas++;
    }

    media_altura_pessoas_10_20_anos = soma_altura_pessoas_10_20_anos / qtd_pessoas_entre_10_20_anos;

    printf("Quantidade de pessoas com mais de 50 anos: %d\n", qtd_pessoas_acima_50_anos);
    printf("Quantidade de pessoas com idade entre 10 e 20 anos: %d\n", qtd_pessoas_entre_10_20_anos);
    printf("Media de altura das pessoas com idade entre 10 e 20 anos: %.2f\n", media_altura_pessoas_10_20_anos);
    printf("Quantidade de pessoas com peso inferior a 40kg: %d\n", qtd_peso_menos_40kg);
    printf("Porcentagem de pessoas com peso inferior a 40kg entre todas as pessoas: %.2f%%\n", (float)qtd_peso_menos_40kg/qtde_pessoas*100);
    return 0;
}