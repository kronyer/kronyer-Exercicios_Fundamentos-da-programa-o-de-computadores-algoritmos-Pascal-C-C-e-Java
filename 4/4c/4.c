#include <stdio.h>
int main (){
    int vet[15] = {5,30,7,4,30,1,8,30,2,30,3,30,6,30,9};
    int pointer = 0;
    int posicoes[15];
    int qtd_30 = 0;

    for (int i = 0; i < 15; i++)
    {
        if (vet[i] == 30)
        {

            posicoes[pointer] = i;
            pointer++;
            qtd_30++;
        }
    }

    printf("Quantidade de 30: %d\n", qtd_30);
    printf("Posições: ");
    for (int i = 0; i < pointer; i++)
    {
        printf("%d ", posicoes[i]);
    }
}