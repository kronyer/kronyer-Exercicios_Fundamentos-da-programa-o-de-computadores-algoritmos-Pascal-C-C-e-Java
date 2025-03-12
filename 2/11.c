#include <stdio.h>
#include <time.h>

#define MEDIA_MIN 12

int main()
{
    int hora_i, min_i, hora_f, min_f, duracao, duracao_min;

    printf("Hora de inicio: ");
    scanf("%d:%d", &hora_i, &min_i);
    printf("Hora de fim: ");
    scanf("%d:%d", &hora_f,&min_f);

    if (min_f < min_i)
    {
        min_f += 60;
        hora_f--;
    }
    if (hora_f < hora_i)
    {
        hora_f += 24;
    }

    duracao = hora_f - hora_i;
    duracao_min = min_f - min_i;

    printf("Duracao: %d:%d\n", duracao, duracao_min);
}

// ->