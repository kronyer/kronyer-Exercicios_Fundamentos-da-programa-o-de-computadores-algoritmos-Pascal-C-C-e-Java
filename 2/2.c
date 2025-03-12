#include <stdio.h>

#define MEDIA_MIN 12

int main()
{
    double n1, n2, n3;
    double exame;
    double media;

    printf("Digite a primeira nota: ");
    scanf("%lf", &n1);
    printf("Digite a segunda nota: ");
    scanf("%lf", &n2);
    printf("Digite a terceira nota: ");
    scanf("%lf", &n3);

    media = (n1 + n2 + n3) / 3;
    printf("Média: %.2lf\n", media);

    if (media < 3)
    {
        printf("Reprovado\n");
    } 
    else if (media < 7)
    {
        printf("Exame final\n");
        exame = MEDIA_MIN - media;
        printf("Nota necessária no exame para aprovação: %.2lf\n", exame);
    } 
    else
    {
        printf("Aprovado\n");
    }

    return 0;
}