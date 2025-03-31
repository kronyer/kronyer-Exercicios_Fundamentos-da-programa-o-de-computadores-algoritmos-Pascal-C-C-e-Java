#include <stdio.h>
int main ()
{
    int vet[8] = {1, 2, -3, -4, 5, 6, -7, 8};
    int vet_positivos[8];
    int vet_negativos[8];

    int pos_index = 0;
    int neg_index = 0;

    for (int i = 0; i < 8; i++)
    {
        if (vet[i] > 0)
        {
            vet_positivos[pos_index++] = vet[i];
        }
        else
        {
            vet_negativos[neg_index++] = vet[i];
        }
    }

    printf("Positivos: ");
    for (int i = 0; i < pos_index; i++)
    {
        printf("%d ", vet_positivos[i]);
    }

    printf("\nNegativos: ");
    for (int i = 0; i < neg_index; i++)
    {
        printf("%d ", vet_negativos[i]);
    }
    
}