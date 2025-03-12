#include <stdio.h>
#include <math.h>

int main()
{
    double alt_quadro, distancai_escada, alt_escada;

    printf("Digite a altura do quadro em cm: ");

    scanf("%lf", &alt_quadro);

    distancai_escada = pow(alt_quadro, 2) + pow(alt_quadro, 2);
    distancai_escada = sqrt(distancai_escada);
    printf("Distância da escada: %.2lf\n", distancai_escada);
}