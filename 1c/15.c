#include <stdio.h>
#include <math.h>

int main()
{
    double preco_fabrica, percentagem_distribuidor, percentagem_imposto, preco_final, lucro_distribuidor, valor_imposto;

    printf("Digite o preco de fabrica: ");
    scanf("%lf", &preco_fabrica);

    printf("Digite a percentagem do distribuidor: ");
    scanf("%lf", &percentagem_distribuidor);

    printf("Digite a percentagem do imposto: ");
    scanf("%lf", &percentagem_imposto);

    

    lucro_distribuidor = preco_fabrica * percentagem_distribuidor / 100;
    valor_imposto = preco_fabrica * percentagem_imposto / 100;
    preco_final = preco_fabrica + (preco_fabrica * percentagem_distribuidor / 100)
     + (preco_fabrica * percentagem_imposto / 100);

     printf("Lucro do distribuidor: %.2f\n", lucro_distribuidor);
     printf("Valor do imposto: %.2f\n", valor_imposto);
        printf("Preco final: %.2f\n", preco_final);


}