#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {
    char input[100];
    int voto;

    int qtd_votos = 0;
    int qtd_1 = 0;
    int qtd_2 = 0;
    int qtd_3 = 0;
    int qtd_4 = 0;
    int qtd_nulos = 0;
    int qtd_brancos = 0;

    do {
        do {
            printf("Digite o voto: ");
            scanf("%s", input);

            // Verifica se a entrada é um número válido
            int is_valid = 1;
            for (int i = 0; i < strlen(input); i++) {
                if (!isdigit(input[i])) {
                    is_valid = 0;
                    break;
                }
            }

            if (is_valid) {
                voto = atoi(input);
            } else {
                voto = -1; // Define um valor inválido para repetir o loop
                printf("Entrada inválida. Por favor, digite um número entre 0 e 6.\n");
            }

        } while (voto < 0 || voto > 6);

        if (voto == 0) {
            break;
        }

        qtd_votos++;
        if (voto == 1) {
            qtd_1++;
        } else if (voto == 2) {
            qtd_2++;
        } else if (voto == 3) {
            qtd_3++;
        } else if (voto == 4) {
            qtd_4++;
        } else if (voto == 5) {
            qtd_nulos++;
        } else {
            qtd_brancos++;
        }
    } while (voto != 0);

    printf("Quantidade de votos: %d\n", qtd_votos);
    printf("Quantidade de votos no candidato 1: %d\n", qtd_1);
    printf("Quantidade de votos no candidato 2: %d\n", qtd_2);
    printf("Quantidade de votos no candidato 3: %d\n", qtd_3);
    printf("Quantidade de votos no candidato 4: %d\n", qtd_4);
    printf("Quantidade de votos nulos: %d\n", qtd_nulos);
    printf("Quantidade de votos brancos: %d\n", qtd_brancos);
    printf("Porcentagem de votos nulos sobre o total de votos: %.2f%%\n", (float)qtd_nulos / qtd_votos * 100);
    printf("Porcentagem de votos em branco sobre o total de votos: %.2f%%\n", (float)qtd_brancos / qtd_votos * 100);

    return 0;
}