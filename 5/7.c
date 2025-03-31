#include <stdio.h>

int main (){
    // ponto de sela da matriz <> aij for o menor elemento da linha i e o maior elemento da coluna j
    int A[5][7] = {
        {1, 2, 3, 4, 5, 6, 7},
        {8, 9, 10, 11, 12, 13, 14},
        {15, 16, 17, 18, 19, 20, 21},
        {22, 23, 24, 25, 26, 27, 28},
        {29, 30, 31, 32, 33, 34, 35}
    };

    int menor_linha = 0;
    int maior_coluna = 0;
    int ponto_de_sela = 0;
    int encontrou_ponto_de_sela = 0;

    for (int i = 0; i < 5; i++)
    {
        int menor = A[i][0];//menor da linha
        int coluna_menor = 0;
        for (int j = 0; j < 7; j++)
        {
            if (A[i][j] < menor)
            {
                menor = A[i][j]; //achou o menor da linha, só checa a coluna que ele pertence
                coluna_menor = j;
            }
        }

        int maior = menor;
        for (int k = 0; k < 5; k++)
        {
            if (A[k][coluna_menor] > maior)
            {
                maior = A[k][coluna_menor]; // acha o maior da coluna
            }
        }

        if (maior == menor) // se o menor da linha for o maior da coluna então é ponto de sela
        {
            ponto_de_sela = menor;
            menor_linha = i;
            maior_coluna = coluna_menor;
            encontrou_ponto_de_sela = 1;
            break;
        }
    }

    if (encontrou_ponto_de_sela)
    {
        printf("Ponto de sela encontrado: A[%d][%d] = %d\n", menor_linha, maior_coluna, ponto_de_sela);
    }
    else
    {
        printf("Nenhum ponto de sela encontrado.\n");
    }

    return 0;
}