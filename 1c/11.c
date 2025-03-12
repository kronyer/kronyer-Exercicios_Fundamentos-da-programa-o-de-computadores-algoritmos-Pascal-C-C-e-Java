#include <stdio.h>
#include <math.h>

int main()
{
    int number, pow, cube;
    double sqrtVar, sqrt3;

    printf("Digite o numero: ");
    scanf("%d", &number);

    pow = number * number;
    cube = number * number * number;
    sqrtVar = sqrt(number);
    sqrt3 = cbrt(number);

    printf("Quadrado: %d\n", pow);
    printf("Cubo: %d\n", cube);
    printf("Raiz quadrada: %.2f\n", sqrtVar);
    printf("Raiz cubica: %.2f\n", sqrt3);

    return 0;
}