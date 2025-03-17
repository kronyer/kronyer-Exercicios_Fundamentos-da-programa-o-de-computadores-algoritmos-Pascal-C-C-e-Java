#include <stdio.h>

int main () {
    double valor_inicial, juros, valor_parcial, total, valor_juros;
    int num_parc;

    printf("Digite o valor inicial: ");
    scanf("%lf", &valor_inicial);

    juros = 0;
    num_parc = 1;

    total = valor_inicial;
    valor_parcial = valor_inicial;

    printf("Total: %.2lf\n", total);
    printf("Juros: %.2lf\n", juros);
    printf("Numero de parcelas: %d\n", num_parc);
    printf("Valor parcial: %.2lf\n", valor_parcial);

    juros += 10;
    num_parc += 2;

    for (int i = 0; i < 5; i++){
        valor_juros = valor_parcial * juros / 100;
        total = valor_inicial + valor_juros;
        valor_parcial = total / num_parc;

        printf("Valor da parcela %d: %.2lf\n", i+1, valor_parcial);
        printf("Valor total: %.2lf\n", total);  
        printf("Valor dos juros: %.2lf\n", valor_juros);
        printf("Numero de parcelas: %d\n", num_parc);
        printf("Valor parcial: %.2lf\n", valor_parcial);
    }

    return 0;
}