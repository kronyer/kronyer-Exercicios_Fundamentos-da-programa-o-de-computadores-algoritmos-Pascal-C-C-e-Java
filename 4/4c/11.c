int main (){
    int vet[10] = {4, 5, 6, 7, 8, 9, 10, 11, 12, 13};

    int vet_par[10] = {0};
    int vet_impar[10] = {0};

    int index_par = 0;
    int index_impar = 0;

    for (int i = 0; i < 10; i++)
    {
        if (vet[i] % 2 == 0)
        {
            vet_par[index_par] = vet[i];
            index_par++;
        }
        else
        {
            vet_impar[index_impar] = vet[i];
            index_impar++;
        }
    }

    printf("Números pares: ");
    for (int i = 0; i < index_par; i++)
    {
        printf("%d ", vet_par[i]);
    }

    printf("\nNúmeros ímpares: ");
    for (int i = 0; i < index_impar; i++)
    {
        printf("%d ", vet_impar[i]);
    }
}