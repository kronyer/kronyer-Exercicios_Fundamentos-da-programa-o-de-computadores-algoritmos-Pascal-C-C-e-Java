#include <stdio.h>

// Função bubbleSort para ordenar um array de inteiros
void bubbleSort(int arr[], int n) {
    // Loop externo para percorrer todo o array
    for (int i = 0; i < n-1; i++) {
        printf("i: %d\n", i);
        // Loop interno para comparar elementos adjacentes
        for (int j = 0; j < n-i-1; j++) {
            printf("j: %d\n", j);
            // Se o elemento atual é maior que o próximo, troque-os
            if (arr[j] > arr[j+1]) {
                printf("Elemento %d é maior que %d\n", arr[j], arr[j+1]);
                int temp = arr[j]; // Armazena o valor atual em uma variável temporária
                printf("O valor do elemento %d é %d e será armazenado num auxiliar para fazer a troca\n", i, arr[j]);
                arr[j] = arr[j+1]; // Atribui o valor do próximo elemento ao elemento atual
                printf("O valor do elemento %d é %d e será atribuído ao elemento %d\n", j+1, arr[j+1], j);
                arr[j+1] = temp;   // Atribui o valor temporário ao próximo elemento
                printf("O valor do elemento %d é %d e será atribuído ao elemento %d\n", j, temp, j+1);
            }
        }
    }
}

int main (){
    // Loop para iterar sobre 5 grupos
    for (int i = 0; i< 5; i++){
        printf("Grupo %d\n", i);

        // Loop para iterar sobre 4 conjuntos de valores
        for (int j = 0; j< 4; j++){
            int a, b, c, d;

            // Solicita e lê o valor de 'a'
            printf("Digite o valor de a: ");
            scanf("%d", &a);

            // Solicita e lê o valor de 'b'
            printf("Digite o valor de b: ");
            scanf("%d", &b);

            // Solicita e lê o valor de 'c'
            printf("Digite o valor de c: ");
            scanf("%d", &c);

            // Solicita e lê o valor de 'd'
            printf("Digite o valor de d: ");
            scanf("%d", &d);

            // Coloca os valores em um array
            int arr[4] = {a, b, c, d};

            // Imprime os valores na ordem normal
            printf("Ordem normal: %d %d %d %d\n", a, b, c, d);

            // Chama a função bubbleSort para ordenar o array
            bubbleSort(arr, 4);

            // Imprime os valores ordenados
            printf("Ordem crescente: %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3]);
        }
    }
}