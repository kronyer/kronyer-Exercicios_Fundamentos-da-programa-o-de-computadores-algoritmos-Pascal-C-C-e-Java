int main (){
    int tamanho = 0;

    scanf("%d", &tamanho);

    int mat[tamanho][tamanho];

    for (int i = 0; i < tamanho; i++){
        for (int j = 0; j < tamanho; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    int soma_abaixo_diagonal_secundária = 0;

    for (int i =0; i < tamanho; i++)
    {
        for (int j =0; j <tamanho; j++)
        {
            if (i+j > tamanho -1)
            {
                soma_abaixo_diagonal_secundária += mat[i][j];
            }
        }
    }
}