#include <stdio.h>

#define MEDIA_MIN 12

int main()
{
  int n1, n2, soma, raiz, op;

  printf("MENU\n");
    printf("1 - Soma\n");
    printf("2 - Raiz quadrada\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &op);

    if (op == 1)
    {
        printf("Digite o primeiro número: ");
        scanf("%d", &n1);
        printf("Digite o segundo número: ");
        scanf("%d", &n2);
        soma = n1 + n2;
        printf("Resultado: %d\n", soma);
    }
    else if (op == 2)
    {
        printf("Digite o número: ");
        scanf("%d", &n1);
        raiz = sqrt(n1);
        printf("Resultado: %d\n", raiz);
    }
    else
    {
        printf("Opção inválida\n");
    }
}