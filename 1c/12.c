#include <stdio.h>
#include <math.h>

int main()
{
    int n1, n2, r1, r2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    r1 = pow(n1, n2);
    r2 = pow(n2, n1);

    printf("Quadrado do primeiro numero: %d\n", r1);
    printf("Quadrado do segundo numero: %d\n", r2);

    return 0;
}