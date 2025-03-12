#include <stdio.h>
#include <math.h>

int main()
{
    double real;

    printf("Digite um valor real: ");
    scanf("%lf", &real);

    printf("Parte inteira: %d\n", (int)real);
    printf("Parte fracionária: %.2lf\n", real - (int)real);
    printf("Arredondamento para cima: %.0lf\n", ceil(real));
    printf("Arredondamento para baixo: %.0lf\n", floor(real));
}