#include <stdio.h>

int main ()
{
    double temperatura[12];
    const char* meses[12] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    int mes_menor = 0, mes_maior = 0; // Variáveis para armazenar os meses da menor e maior temperatura

    for (int i = 0; i < 12; i++)
    {
        printf("Digite a temperatura do mês %d: ", i + 1);
        scanf("%lf", &temperatura[i]);
    }

    double menor = temperatura[0]; // Inicializa a menor temperatura
    double maior = temperatura[0]; // Inicializa a maior temperatura

    for (int i = 1; i < 12; i++) // Começa do segundo mês
    {
        if (temperatura[i] < menor)
        {
            menor = temperatura[i];
            mes_menor = i; // Atualiza o mês da menor temperatura
        }
        if (temperatura[i] > maior)
        {
            maior = temperatura[i];
            mes_maior = i; // Atualiza o mês da maior temperatura
        }
    }

    printf("A menor temperatura foi %.2lf e ocorreu no mês de %s.\n", menor, meses[mes_menor]);
    printf("A maior temperatura foi %.2lf e ocorreu no mês de %s.\n", maior, meses[mes_maior]);

    return 0;
}