#include <stdio.h>

int main() {
    double preco_ingresso;
    int ingressos_vendidos;
    double desp = 200;
    double lucro;
    double max_lucro = -1;
    double melhor_preco = 0;
    int melhor_qtd_ingressos = 0;

    printf("Preco do Ingresso\tQtd de Ingressos\tLucro\n");
    for (preco_ingresso = 5.0; preco_ingresso >= 1.0; preco_ingresso -= 0.50) {
        ingressos_vendidos = 120 + (int)((5.0 - preco_ingresso) / 0.50) * 26;
        lucro = (preco_ingresso * ingressos_vendidos) - desp;
        printf("%.2f\t\t\t%d\t\t\t%.2f\n", preco_ingresso, ingressos_vendidos, lucro);

        if (lucro > max_lucro) {
            max_lucro = lucro;
            melhor_preco = preco_ingresso;
            melhor_qtd_ingressos = ingressos_vendidos;
        }
    }

    printf("\nLucro maximo esperado: %.2f\n", max_lucro);
    printf("Preco do ingresso para lucro maximo: %.2f\n", melhor_preco);
    printf("Qtd de ingressos vendidos para lucro maximo: %d\n", melhor_qtd_ingressos);

    return 0;
}