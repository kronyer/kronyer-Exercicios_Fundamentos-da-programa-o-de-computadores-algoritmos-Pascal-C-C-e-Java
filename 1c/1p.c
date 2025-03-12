#include <stdio.h>
#include <math.h>

int main()
{
    int n1, n2, r;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);

    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    r = n1 - n2;
    printf("Resultado: %d\n", r);
}