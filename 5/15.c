#include <stdio.h>
int main (){
    int vet1[5] = {1, 2, 3, 4, 5};
int maior_vet1 = vet1[0];

    int vet2[10] = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18};
    int maior_vet2 = vet2[0];
    int menor_vet2 = vet2[0];

    int mat[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };

    int mat_res[4][3] = {0};

    for (int i = 0; i < 5; i++)
    {
        if (vet1[i] > maior_vet1)
        {
            maior_vet1 = vet1[i];
        }
    }

    for (int i = 0; i < 10; i++)
    {
        if (vet2[i] > maior_vet2)
        {
            maior_vet2 = vet2[i];
        }

        if (vet2[i] < menor_vet2)
        {
            menor_vet2 = vet2[i];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mat_res[i][j] = mat[i][j] + maior_vet1 * menor_vet2;
        }
    }

    int qtd_1_a_5_colunas[3] = {0};
    int soma_pares_linha[4] = {0};
    for (int i = 0; i < 4; i++)
    {

        for (int j = 0; j < 3; j++)
        {

            if (mat[i][j] >= 1 && mat[i][j] <= 5)
            {
                qtd_1_a_5_colunas[j]++;
            }

            if (mat[i][j] % 2 == 0)
            {
                soma_pares_linha[i] += mat[i][j];
            }
        }
        printf("\n");
    }

    printf("Maior valor do vetor 1: %d\n", maior_vet1);
    printf("Maior valor do vetor 2: %d\n", maior_vet2);
    printf("Menor valor do vetor 2: %d\n", menor_vet2);

    printf("Matriz resultante:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", mat_res[i][j]);
        }
        printf("\n");
    }

    printf("Quantidade de elementos entre 1 e 5 em cada coluna:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Coluna %d: %d\n", i, qtd_1_a_5_colunas[i]);
    }

    printf("Soma dos elementos pares de cada linha:\n");
    for (int i = 0; i < 4; i++)
    {
        printf("Linha %d: %d\n", i, soma_pares_linha[i]);
    }

    return 0;
}