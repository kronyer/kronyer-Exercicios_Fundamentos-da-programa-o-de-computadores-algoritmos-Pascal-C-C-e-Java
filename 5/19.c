#include <stdio.h>

int main() {
    int mat[5][4] = {0}; // Inicializa a matriz com zeros
    int parLinha = 0;    // Índice da próxima linha par a ser preenchida
    int imparLinha = 1;  // Índice da próxima linha ímpar a ser preenchida
    int parColuna[5] = {0};   // Controle da próxima coluna para cada linha par
    int imparColuna[5] = {0}; // Controle da próxima coluna para cada linha ímpar

    while (1) {
        int input;
        printf("Digite um número (ou -1 para encerrar): ");
        scanf("%d", &input);

        if (input == -1) {
            break; // Encerra a leitura se o usuário digitar -1
        }

        if (input % 2 == 0) { // Número par
            if (parLinha < 5 && parColuna[parLinha] < 4) {
                mat[parLinha][parColuna[parLinha]] = input;
                parColuna[parLinha]++;
                if (parColuna[parLinha] == 4) {
                    parLinha += 2; // Avança para a próxima linha par
                }
            } else {
                printf("Não há mais espaço para números pares.\n");
            }
        } else { // Número ímpar
            if (imparLinha < 5 && imparColuna[imparLinha] < 4) {
                mat[imparLinha][imparColuna[imparLinha]] = input;
                imparColuna[imparLinha]++;
                if (imparColuna[imparLinha] == 4) {
                    imparLinha += 2; // Avança para a próxima linha ímpar
                }
            } else {
                printf("Não há mais espaço para números ímpares.\n");
            }
        }

        // Verifica se a matriz está completamente preenchida
        if (parLinha >= 5 && imparLinha >= 5) {
            printf("A matriz está completamente preenchida.\n");
            break;
        }
    }

    // Exibe a matriz resultante
    printf("\nMatriz resultante:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}