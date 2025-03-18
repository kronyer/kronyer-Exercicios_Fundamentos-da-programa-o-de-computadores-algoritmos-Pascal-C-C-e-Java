#include <stdio.h>

int main() {
    double valor_carro;
    double valor_final;
    int qtd_parcelas;
    double valor_parcela;

    printf("Digite o valor do carro: ");
    scanf("%lf", &valor_carro);

    printf("Digite a quantidade de parcelas: ");
    scanf("%d", &qtd_parcelas);

    if (qtd_parcelas == 1) {
        valor_final = valor_carro * 0.8;
    } else {
        valor_final = valor_carro;
        for (int i = 1; i <= qtd_parcelas; i++) {
            if (i <= 6) {
                valor_final += valor_carro * 0.03;
            }
            else if (i <= 12) {
                valor_final += valor_carro * 0.06;
            }
            else if (i <= 18) {
                valor_final += valor_carro * 0.09;
            }
            else if (i <= 24) {
                valor_final += valor_carro * 0.12;
            }
            else if (i <= 30) {
                valor_final += valor_carro * 0.15;
            }
            else if (i <= 36) {
                valor_final += valor_carro * 0.18;
            }
            else if (i <= 42) {
                valor_final += valor_carro * 0.21;
            }
            else if (i <= 48) {
                valor_final += valor_carro * 0.24;
            }
            else if (i <= 54) {
                valor_final += valor_carro * 0.27;
            }
            else if (i <= 60) {
                valor_final += valor_carro * 0.30;
            }
        }
    }

    valor_parcela = valor_final / qtd_parcelas;

    printf("Valor final do carro: %.2f\n", valor_final);
    printf("Valor de cada parcela: %.2f\n", valor_parcela);

    return 0;
}