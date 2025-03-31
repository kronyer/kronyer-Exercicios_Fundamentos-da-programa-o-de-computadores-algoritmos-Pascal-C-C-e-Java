#include <stdio.h>

int main (){
    int vetor[10] = {5,4,3,18,5,3,4,18,4,18};
    int repetidos[10];
    int contagem[10] = {0}; // Array para contar as ocorrências

    int pointer = 0;

    for (int i = 0; i < 10; i++)
    {
        int repetido = 0;
        for (int j = 0; j < 10; j++)
        {
            if (i != j && vetor[i] == vetor[j])
            {
                repetido = 1;
                break;
            }
        }

        if (repetido)
        {
            int ja_contado = 0;
            for (int k = 0; k < pointer; k++)
            {
                if (repetidos[k] == vetor[i])
                {
                    ja_contado = 1;
                    break;
                }
            }

            if (!ja_contado)
            {
                repetidos[pointer] = vetor[i];
                pointer++;
            }
            contagem[i]++;
        }
    }

    for (int i = 0; i < pointer; i++)
    {
        int count = 0;
        for (int j = 0; j < 10; j++)
        {
            if (repetidos[i] == vetor[j])
            {
                count++;
            }
        }
        printf("Número repetido: %d, vezes: %d\n", repetidos[i], count);
    }

    return 0;
}