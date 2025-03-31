int main ()
{
    char nomes[5][50]; // Array bidimensional para armazenar os nomes dos funcionários
    double salarios[5];
    int tempo_servico[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o nome do funcionário %d: ", i + 1);
        scanf("%s", nomes[i]);
        printf("Digite o salário do funcionário %d: ", i + 1);
        scanf("%lf", &salarios[i]);
        printf("Digite o tempo de serviço do funcionário %d: ", i + 1);
        scanf("%d", &tempo_servico[i]);
    }

    for (int i = 0; i < 5; i++)
    {
       if (tempo_servico[i] <=5 && salarios[i] >= 800)
       {
        printf("%s\n", nomes[i]);
       }
    }

    for (int i = 0; i < 5; i++)
    {
        double novo_salario = 0;
       if (tempo_servico[i] >5 && salarios[i] < 800)
       {
              novo_salario = salarios[i] + (salarios[i] * 0.35);
              printf("%s\n", nomes[i]);
              printf("Novo salário: %.2lf\n", novo_salario);
       }
       else if (tempo_servico[i] > 5){
        novo_salario = salarios[i] + (salarios[i] * 0.25);
              printf("%s\n", nomes[i]);
              printf("Novo salário: %.2lf\n", novo_salario);
       } else{
        novo_salario = salarios[i] + (salarios[i] * 0.15);
        printf("%s\n", nomes[i]);
        printf("Novo salário: %.2lf\n", novo_salario);       }
    }

}