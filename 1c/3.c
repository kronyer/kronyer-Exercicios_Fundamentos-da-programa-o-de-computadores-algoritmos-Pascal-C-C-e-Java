#include <stdio.h>

int main()
{
    float n1, n2, n3, media;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2); //%f to print float and & to point to the address of the variable

    media = (n1 + n2) / 2;
    printf("Sua média é: %.2f", media);
    return 0;
}