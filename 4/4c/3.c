#include <stdio.h>

int main (){
    int cod_produto[10] = {0}; // Inicializa com 0
    int qtd_produto[10] = {0}; // Inicializa com 0

    int option;
    do
    {
        printf("Digite 1 para remover produto ou 0 para sair: ");
        scanf("%d", &option);
        if(option == 0){
            break;
        }

        int codigo;
        int quantidade;

        printf("Digite o código do produto: ");
        scanf("%d", &codigo);

        int codigo_existe = 0;

        for (int i = 0; i < 10; i++)
        {
            if (cod_produto[i] == codigo)
            {
                codigo_existe = 1;
                break;
            }
        }

        if (!codigo_existe)
        {
            printf("Código não encontrado\n");
            continue;
        }
        
        printf("Digite a quantidade a ser removida: ");
        scanf("%d", &quantidade);

        for (int i = 0; i < 10; i++)
        {
            if (cod_produto[i] == codigo)
            {
                if(qtd_produto[i] < quantidade)
                {
                    printf("Quantidade insuficiente\n");
                }
                else
                {
                    qtd_produto[i] -= quantidade;
                    printf("Produto removido com sucesso\n");
                }
                break;
            }
        }

    } while (option != 0);

    printf("Estoque atual:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Código: %d, Quantidade: %d\n", cod_produto[i], qtd_produto[i]);
    }
    
    return 0;
}