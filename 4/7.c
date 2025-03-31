#include <stdio.h>

int main ()
{
    int vet[8]; // Declaração do vetor com 8 elementos
    int n = 0; // Número de elementos atualmente no vetor

    for (int i = 0; i < 8; i++) // Loop para preencher o vetor
    {
        int num; // Variável para armazenar o número digitado
        printf("Digite um número: ");
        scanf("%d", &num); // Lê o número digitado pelo usuário

        // Inserção ordenada
        int j = n - 1; // Inicializa j como o índice do último elemento preenchido
        while (j >= 0 && vet[j] > num) // Move elementos maiores que num uma posição para a direita
        {
            vet[j + 1] = vet[j]; // Move o elemento para a direita
            j--; // Decrementa j para verificar o próximo elemento
        }
        vet[j + 1] = num; // Insere num na posição correta
        n++; // Incrementa n para refletir o novo número de elementos no vetor
    }

    // Imprimir o vetor ordenado
    printf("Vetor ordenado: ");
    for (int i = 0; i < 8; i++) // Loop para imprimir os elementos do vetor
    {
        printf("%d ", vet[i]); // Imprime cada elemento do vetor
    }
    printf("\n"); // Imprime uma nova linha

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}