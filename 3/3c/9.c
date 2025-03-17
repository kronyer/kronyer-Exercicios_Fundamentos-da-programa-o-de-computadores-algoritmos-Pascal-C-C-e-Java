int main (){
int idade;
double peso, altura;

int soma_idade = 0;

int qtd_mais_90kg_menos_150cm = 0;
int qtd_mais_90kg_mais_190cm_entre_10_30 = 0;

    for (int i =0; i< 10; i++)
    {
        scanf("%d %lf %lf", &idade, &peso, &altura);
        soma_idade += idade;

        if (peso > 90 && altura < 150)
        {
            qtd_mais_90kg_menos_150cm++;
        }

        if (peso > 90 && altura > 190 && (idade >= 10 && idade <= 30))
        {
            qtd_mais_90kg_mais_190cm_entre_10_30++;
        }
    }

    printf("Media de idade das pessoas: %.2f\n", (double)soma_idade / 10);
    printf("Quantidade de pessoas com mais de 90kg e menos de 150cm: %d\n", qtd_mais_90kg_menos_150cm);
    printf("Quantidade de pessoas com mais de 90kg, mais de 190cm e idade entre 10 e 30 anos: %d\n", qtd_mais_90kg_mais_190cm_entre_10_30);
    printf("Porcentagem de pessoas com mais de 90kg, mais de 190cm e idade entre 10 e 30 anos entre todas as pessoas: %.2f%%\n", (double)qtd_mais_90kg_mais_190cm_entre_10_30/10*100);
    return 0;
}