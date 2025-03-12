#include <stdio.h>
#include <math.h>

int main()
{
    double hora, h,m, hora_em_minutos;

    printf("Digite a hora atual: ");
    scanf("%lf", &hora);

    h = (int)hora;
    m = (hora - h);

    hora_em_minutos = h * 60 + m * 100;
    printf("Hora em minutos: %.0lf\n", hora_em_minutos);
}