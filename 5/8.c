#include <stdio.h>
int main (){
    int mat[6][4] = { {30, 2, 3, 4}, {30, 6, 7, 8}, {9, 10, 11, 12}, {13, 30, 15, 16}, {17, 18, 30, 20}, {21, 22, 23, 24} };

    int qtd_30 = 0;

    for (int i =0 ; i < 6; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (mat[i][j] == 30)
            {
                mat[i][j] = 0;
                qtd_30++;
            }
        }
    }

    printf("Quantidade de 30s: %d\n", qtd_30);

    for (int i =0 ; i < 6; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}