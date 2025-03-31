#include <stdio.h>
int main (){
    int input[5];

    int opcao;
    

    for (int i = 0; i < 5; i++)
    {
        printf("Digite um número: ");
        scanf("%d", &input[i]);
    }

    printf("Escolha uma opção:\n1 - Mostrar os números em ordem normal\n2 - Mostrar os números em ordem inversa\n");

    scanf("%d", &opcao);

    if (opcao == 1)
    {
        for (int i = 0; i < 5; i++)
        {
            printf("%d ", input[i]);
        }
    } else if (opcao == 2)
    {
        for (int i = 4; i >= 0; i--)
        {
            printf("%d ", input[i]);
        }
    } else {
        printf("Opção inválida\n");
    }
}