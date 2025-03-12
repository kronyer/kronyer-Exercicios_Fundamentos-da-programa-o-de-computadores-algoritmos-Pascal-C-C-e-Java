#include <stdio.h>
#include <math.h>

int main()
{
    double custo, convite, qtd_convites;

    printf("Digite o custo do espetáculo: ");
    scanf("%lf", &custo);

    printf("Digite o valor do convite: ");
    scanf("%lf", &convite);

    qtd_convites = ceil(custo / convite);
    printf("Quantidade de convites necessária: %.0lf\n", qtd_convites);
}