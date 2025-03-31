#include <stdio.h>

int main (){
    int mat[5][4] = {0}; // Inicializa a matriz com zeros

    int ordered_input[20] = {0}; // Array para armazenar os números em ordem
    int count = 0; // Contador de números lidos

    int input; // Variável para armazenar a entrada do usuário

    while (1) {
        printf("Digite um número (ou -1 para encerrar): ");
        scanf("%d", &input);

        if (input == -1) {
            break; // Encerra a leitura se o usuário digitar -1
        }

        ordered_input[count] = input; // Armazena o número lido
        count++; // Incrementa o contador

        // Verifica se o array está cheio
        if (count >= 20) {
            printf("O array está cheio. Não é possível armazenar mais números.\n");
            break;
        }
    }

    //ordenação dos números

    for (int i = 0; i < 20 - 1; i++){
        for (int j =0; j < 20 - i - 1; j++){
            if (ordered_input[j] > ordered_input[j + 1]){
                int temp = ordered_input[j];
                ordered_input[j] = ordered_input[j + 1];
                ordered_input[j + 1] = temp;
            }
        }
    }

    printf("array ordenado:\n");
    for (int i = 0; i < count; i++){
        printf("%d ", ordered_input[i]);
    }


    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 4; j++){
            mat[i][j] = ordered_input[i*4+j];
        }
    }
}