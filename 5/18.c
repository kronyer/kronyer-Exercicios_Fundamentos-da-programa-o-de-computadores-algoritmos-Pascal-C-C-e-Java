#include <stdio.h>

int main (){
    int vet[18] = {3,25,1,58,97,43,65,32,27,19,10,6,88,13,34,57,89,87};

    int mat[3][6] = {0};

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 6; j++){
            mat[i][j] = vet[i*6+j];
        }
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 6; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}