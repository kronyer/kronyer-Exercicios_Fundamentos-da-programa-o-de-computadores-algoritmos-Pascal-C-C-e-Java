#include <stdio.h>

int main ()
{
    int dado[20] = {4,1,5,2,6,6,3,4,5,6,1,2,3,4,5,6,1,2,3,4};
    int frequencia[6] = {0,0,0,0,0,0};

    for (int i = 0; i < 20; i++)
    {
        frequencia[dado[i] - 1]++;
    }

    for (int i = 0; i < 6; i++)
    {
        printf("O número %d apareceu %d vezes\n", i + 1, frequencia[i]);
    }
}