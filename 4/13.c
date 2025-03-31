#include <stdio.h>
int main (){
    int vet[10] = {1, 51,33,74,99,25,2,8,10,5};
    int achou = 0;

    for (int i = 0; i < 10 -1; i++)
    {
        if (vet[i] > 50)
        {
            printf("%d na posicão %d ", vet[i], i);
            achou = 1;
        }
    }
    if (achou == 0)
    {
        printf("Nenhum número maior que 50 foi encontrado.");
    }
}