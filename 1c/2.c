#include <stdio.h>

int main()
{
   int n1, n2, n3, media;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    printf("Sua média é: %d", (n1 + n2) / 2);
    return 0;
}