#include <stdio.h>

int main (){
    int vet1[10] = {4,7,5,8,2,15,9,6,10,11};
    int vet2[5] = {3,4,5,8,2};

    int vet_res_1[10] = {0}; // Inicializa com 0
    int vet_res_2[10] = {0}; // Inicializa com 0

    int index_res_1 = 0;
    int index_res_2 = 0;

    for (int i = 0; i < 10; i++)
    {
        if (vet1[i] % 2 == 0) // Se o número é par
        {
            int soma_par_2 = 0;
            for (int j = 0; j < 5; j++)
            {
                soma_par_2 += vet2[j]; // Soma todos os números do segundo vetor
            }
            vet_res_1[index_res_1] = vet1[i] + soma_par_2; // Soma o número par com a soma dos números do segundo vetor
            index_res_1++;
        }
        else // Se o número é ímpar
        {
            int count_divisors = 0;
            for (int j = 0; j < 5; j++)
            {
                if (vet1[i] % vet2[j] == 0) // Verifica se o número ímpar é divisível por algum número do segundo vetor
                {
                    count_divisors++;
                }
            }
            vet_res_2[index_res_2] = count_divisors; // Armazena a quantidade de divisores
            index_res_2++;
        }
    }

    printf("Primeiro vetor resultante: ");
    for (int i = 0; i < index_res_1; i++)
    {
        printf("%d ", vet_res_1[i]);
    }

    printf("\nSegundo vetor resultante: ");
    for (int i = 0; i < index_res_2; i++)
    {
        printf("%d ", vet_res_2[i]);
    }

    return 0;
}