int main()
{
    int saldos[10];
    int codigos[10];

    for (int i =0; i < 10; i++)
    {
        scanf("%d", &codigos[i]);
        scanf("%d", &saldos[i]);
    }

    printf("1.Deposito");
    printf("2.Saque");
    printf("3.Somar todos os saldos");
    printf("4.Sair");

    int opcao;
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        int codigo;
        int deposito;
        scanf("%d", &codigo);
        scanf("%d", &deposito);

        for (int i = 0; i < 10; i++)
        {
            if (codigos[i] == codigo)
            {
                saldos[i] += deposito;
                break;
            }
            else
            {
                printf("Codigo nao encontrado");
                break;
            }
        }
        break;
    case 2:
        int saque;
        scanf("%d", &codigo);
        scanf("%d", &saque);

        for (int i = 0; i < 10; i++)
        {
            if (codigos[i] == codigo)
            {
                saldos[i] -= saque;
                break;
            }
            else
            {
                printf("Codigo nao encontrado");
                break;
            }
        }
        break;
    case 3:
        int soma = 0;
        for (int i = 0; i < 10; i++)
        {
            soma += saldos[i];
        }
        printf("Soma dos saldos: %d", soma);
        break;
    case 4:
        break;
    default:
        break;
    }
}