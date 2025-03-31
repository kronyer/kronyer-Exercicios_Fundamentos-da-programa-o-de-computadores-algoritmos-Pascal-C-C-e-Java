int main (){
    int mat[7][7] = {
        {1, 2, 3, 4, 5, 6, 7},
        {8, 9, 10, 11, 12, 13, 14},
        {15, 16, 17, 18, 19, 20, 21},
        {22, 23, 24, 25, 26, 27, 28},
        {29, 30, 31, 32, 33, 34, 35},
        {36, 37, 38, 39, 40, 41, 42},
        {43, 44, 45, 46, 47, 48, 49}
    };

    int maior_linha[7] = {0};
    int menor_coluna[7] = {0};

    for (int i =0; i< 7; i++){

        for (int j = 0; j < 7; j++){
            if (mat[i][j] > maior_linha[i]){
                maior_linha[i] = mat[i][j];
            }

            if (i == 0){
                menor_coluna[j] = mat[i][j];
            } else {
                if (mat[i][j] < menor_coluna[j]){
                    menor_coluna[j] = mat[i][j];
                }
            }
        }
    }
}