#include <stdio.h>

int main()
{
   double nota_trabalho, aval_sem, exame, media;
   int peso_trabalho = 2, peso_aval_sem = 3, peso_exame = 5;
    printf("Digite a nota do trabalho: ");
    scanf("%lf", &nota_trabalho);

    printf("Digite a nota da avaliação semestral: ");
    scanf("%lf", &aval_sem);

    printf("Digite a nota do exame final: ");
    scanf("%lf", &exame);

    media = (nota_trabalho * peso_trabalho + aval_sem * peso_aval_sem + exame * peso_exame) / (peso_trabalho + peso_aval_sem + peso_exame);
    printf("Média: %.2lf\n", media);

    if (media >= 8 && media <= 10)
    {
        printf("Conceito A\n");
    }
    else if (media >= 7 && media < 8)
    {
        printf("Conceito B\n");
    }
    else if (media >= 6 && media < 7)
    {
        printf("Conceito C\n");
    }
    else if (media >= 5 && media < 6)
    {
        printf("Conceito D\n");
    }
    else
    {
        printf("Conceito E\n");
    }
}