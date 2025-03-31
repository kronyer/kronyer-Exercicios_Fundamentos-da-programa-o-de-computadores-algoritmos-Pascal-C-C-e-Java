int main (){
    int vet[10] = {4, 5, -6, -7, 8, -9, 10, -11, 12, 13};
    int qtd_negativos = 0;
    int soma_positivos = 0;

    for (int i = 0; i < 10; i++)
    {
        if (vet[i] < 0)
        {
            printf("Vetor[%d] é negativo\n", i);
            qtd_negativos++;
        }
        else
        {
            soma_positivos += vet[i];
        }
    }

    printf("Quantidade de números negativos: %d\n", qtd_negativos);
    printf("Soma dos números positivos: %d\n", soma_positivos);
}