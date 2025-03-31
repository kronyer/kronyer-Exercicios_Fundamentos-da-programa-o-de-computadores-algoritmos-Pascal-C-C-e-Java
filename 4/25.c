#include <stdio.h>

int main (){
    int vetores_primos_acima_de_100[10];

    int pointer = 0;

    for (int i = 101; i < 1000 && pointer < 10; i++)
    {
        int primo = 1;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                primo = 0;
                break;
            }
        }

        if (primo)
        {
            vetores_primos_acima_de_100[pointer] = i;
            pointer++;
        }
    }

    // Exibir os números primos encontrados
    for (int i = 0; i < pointer; i++)
    {
        printf("%d ", vetores_primos_acima_de_100[i]);
    }
    printf("\n");

    return 0;
}