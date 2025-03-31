#include <stdio.h>

int main ()
{
    int janela[24];
    int corredor[24];

    for (int i = 0; i < 24; i++)
    {
        janela[i] = 0;
        corredor[i] = 0;
    }

    printf("1. Vender passagem\n");
    printf("2. Mostrar mapa de ocupação\n");
    printf("3. Sair\n");

    int option;
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        printf("Janela ou corredor? (1 para janela, 2 para corredor)\n");
        int tipo;
        scanf("%d", &tipo);

        int numero_poltrona;
        if (tipo == 1)
        {
            printf("Digite o número da poltrona (0-23): ");
            scanf("%d", &numero_poltrona);

            if (janela[numero_poltrona] == 0)
            {
                janela[numero_poltrona] = 1;
                printf("Poltrona %d na janela reservada com sucesso.\n", numero_poltrona);
            }
            else
            {
                int reservado = 0;
                for (int i = 0; i < 24; i++)
                {
                    if (janela[i] == 0)
                    {
                        janela[i] = 1;
                        printf("Poltrona %d na janela reservada com sucesso.\n", i);
                        reservado = 1;
                        break;
                    }
                }
                if (!reservado)
                {
                    printf("Ônibus lotado na janela.\n");
                }
            }
        }
        else if (tipo == 2)
        {
            printf("Digite o número da poltrona (0-23): ");
            scanf("%d", &numero_poltrona);

            if (corredor[numero_poltrona] == 0)
            {
                corredor[numero_poltrona] = 1;
                printf("Poltrona %d no corredor reservada com sucesso.\n", numero_poltrona);
            }
            else
            {
                int reservado = 0;
                for (int i = 0; i < 24; i++)
                {
                    if (corredor[i] == 0)
                    {
                        corredor[i] = 1;
                        printf("Poltrona %d no corredor reservada com sucesso.\n", i);
                        reservado = 1;
                        break;
                    }
                }
                if (!reservado)
                {
                    printf("Ônibus lotado no corredor.\n");
                }
            }
        }
        break;

    case 2:
        printf("Mapa de ocupação:\n");
        printf("Janela: ");
        for (int i = 0; i < 24; i++)
        {
            printf("%d ", janela[i]);
        }
        printf("\nCorredor: ");
        for (int i = 0; i < 24; i++)
        {
            printf("%d ", corredor[i]);
        }
        printf("\n");
        break;

    case 3:
        printf("Saindo...\n");
        break;

    default:
        printf("Opção inválida.\n");
        break;
    }

    return 0;
}