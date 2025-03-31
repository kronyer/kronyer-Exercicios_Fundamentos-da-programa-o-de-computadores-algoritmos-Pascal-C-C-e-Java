#include <stdio.h>
int main (){
    int vet[6] = {1,2,3,4,5,6};

    int qtd_pares = 0;
    int qtd_impares = 0;
    for (int i = 0; i < 6; i++)
    {
     if (vet[i] % 2 == 0)
     {
            qtd_pares++;
      printf("%d é par\n", vet[i]);
     } else{
            qtd_impares++;
            printf("%d é impar\n", vet[i]);
     }
    }

    printf("Quantidade de pares: %d\n", qtd_pares);
    printf("Quantidade de impares: %d\n", qtd_impares);
}