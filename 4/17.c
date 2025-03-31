#include <stdio.h>

int main ()
{
    int input[6];

    int soma_par = 0;
    int pares[6];
    int pos_pares[6]; // Array para armazenar as posições dos números pares
    int pointer_pares = 0;

    int impares[6];
    int pos_impares[6]; // Array para armazenar as posições dos números ímpares
    int pointer = 0;
    int count_impar = 0;

    for (int i = 0; i < 6; i++)
    {
        printf("Digite um número: ");
        scanf("%d", &input[i]);

        if (input[i] % 2 == 0)
        {
            soma_par += input[i];
            pares[pointer_pares] = input[i];
            pos_pares[pointer_pares] = i; // Armazena a posição original
            pointer_pares++;
        } else {
            impares[pointer] = input[i];
            pos_impares[pointer] = i; // Armazena a posição original
            pointer++;
            count_impar++;
        }
    }

    printf("Soma dos números pares: %d\n", soma_par);

    printf("Números ímpares: ");
    for (int i = 0; i < count_impar; i++)
    {
        printf("%d (posição %d) ", impares[i], pos_impares[i]);
    }

    printf("\nNúmeros pares: ");
    for (int i = 0; i < pointer_pares; i++)
    {
        printf("%d (posição %d) ", pares[i], pos_pares[i]);
    }

    return 0;
}