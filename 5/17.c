#include <stdio.h>
int main (){
    int mat[5][5];
    int mult5[5] = {0};
    int mult11[5] = {0};
    int mult13[5] = {0};

    // Lendo os valores da matriz e contando múltiplos
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            do {
                scanf("%d", &mat[i][j]);
            } while (mat[i][j] % 5 != 0 && mat[i][j] % 11 != 0 && mat[i][j] % 13 != 0);

            if (mat[i][j] % 5 == 0) {
                mult5[i] = mat[i][j];
                printf("armazenando 5\n");
            }
            if (mat[i][j] % 11 == 0) {
                mult11[j] = mat[i][j];
                printf("armazenando 11\n");
            }
            if (mat[i][j] % 13 == 0) {
                mult13[i] = mat[i][j];
                printf("armazenando 13\n");
            }
        }
    }

    // Preenchendo a diagonal principal com mult5
    for (int i = 0; i < 5; i++) {
        mat[i][i] = mult5[i];
        printf("armazenando 5\n");
    }

    // Preenchendo a parte superior da diagonal principal com mult11
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            mat[i][j] = mult11[j]; // Corrigido para usar mult11[j]
            printf("armazenando 11\n");
        }
    }

    // Preenchendo a parte inferior da diagonal principal com mult13
    for (int i = 1; i < 5; i++) {
        for (int j = 0; j < i; j++) {
            mat[i][j] = mult13[i]; // Corrigido para usar mult13[i]
            printf("armazenando 13\n");
        }
    }

    // Imprimindo a matriz resultante
    printf("Matriz resultante:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}