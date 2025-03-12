#include <stdio.h>
#include <math.h>

int main()
{
    double kg_racao, racao1, racao2, total;

    printf("Digite a quantidade de ração em kg: ");
    scanf("%lf", &kg_racao);

    kg_racao = kg_racao * 1000;

    printf("Digite o valor da primeira ração: ");
    scanf("%lf", &racao1);
    racao1 = racao1 ;

    printf("Digite o valor da segunda ração: ");
    scanf("%lf", &racao2);
    racao2 = racao2 ;

    total = kg_racao - 5 * (racao1 + racao2);
    printf("Quantidade final de ração: %.2lf\n", total);
}