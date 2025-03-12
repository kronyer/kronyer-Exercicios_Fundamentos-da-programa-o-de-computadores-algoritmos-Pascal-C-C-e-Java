#include <stdio.h>

int main()
{
    float n1,n2,n3,p1,p2,p3,media;

    p1 = 2;
    p2 = 3;
    p3 = 5;

    printf("Digite a nota da primeira prova: ");
    scanf("%f", &n1);
    printf("Digite a nota da segunda prova: ");
    scanf("%f", &n2);
    printf("Digite a nota da terceira prova: ");
    scanf("%f", &n3);

    media = (n1*p1 + n2*p2 + n3*p3) / (p1 + p2 + p3);
    printf("Sua média é: %.2f", media);
}