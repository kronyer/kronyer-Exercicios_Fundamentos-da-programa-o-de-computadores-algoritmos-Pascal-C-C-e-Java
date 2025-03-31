#include <stdio.h>

int main (){
    int mat[10][10] = {
        {1, 63, 3, 3, 3, 3, 3, 3, 3, 3},
        {6, 7, 56, 66, 10, 10, 10, 10, 10, 10},
        {66, 66, 56, 14, 68, 68, 68, 68, 68, 68},
        {16, 17, 18, 19, 20, 20, 20, 20, 20, 20},
        {21, 63, 23, 24, 25, 25, 25, 25, 25, 25},
        {26, 27, 28, 29, 30, 30, 30, 30, 30, 30},
        {31, 32, 33, 34, 35, 35, 35, 35, 35, 35},
        {16, 72, 38, 39, 40, 40, 40, 40, 40, 40},
        {56, 42, 63, 44, 45, 45, 45, 45, 45, 45},
        {46, 47, 56, 49, 50, 50, 50, 50, 50, 50}
    };

    // Troca a linha 2 com a linha 8
    int aux[10] = {0};
    for (int i = 0; i < 10; i++)
    {
        aux[i] = mat[8][i];
        mat[8][i] = mat[2][i];
        mat[2][i] = aux[i];
    }

    printf("Matriz após a troca 2 - 8:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    // Troca a coluna 4 com a coluna 9
    int aux2[10] = {0};
    for (int i = 0; i < 10; i++)
    {
        aux2[i] = mat[i][4];
        mat[i][4] = mat[i][9];
        mat[i][9] = aux2[i];
    }

    printf("Matriz após a troca 4 - 9:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 10; i++)
    {
        int temp = mat[i][i];
        mat[i][i] = mat[i][9 - i];
        mat[i][9 - i] = temp;
    }

    // Exibir a matriz resultante para verificar a troca
    printf("Matriz após a troca diagonal:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}