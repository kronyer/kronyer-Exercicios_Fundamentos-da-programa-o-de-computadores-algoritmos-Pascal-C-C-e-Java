#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Função para comparar strings ignorando maiúsculas e minúsculas
int strcmpi(const char *s1, const char *s2) {
    while (*s1 && (tolower(*s1) == tolower(*s2))) {
        s1++;
        s2++;
    }
    return tolower(*(unsigned char *)s1) - tolower(*(unsigned char *)s2);
}

int main(int argc, char** argv) {
    int TAM = 12;
    int opc, opc_consultar;
    int quant_lugares[TAM], num_voo[TAM];
    char origem[TAM][30], destino[TAM][30];
    int i, j;

    printf("\t\tCONTROLE DE PASSAGENS \n\n");

    printf("INFORMAÇÕES SOBRE OS VOOS \n");

    // Leitura da quantidade de lugares, número dos voos, origem e destino
    for (i = 0; i < TAM; i++) {
        printf("\tDigite a quantidade de lugares do avião %d: ", i + 1);
        scanf("%d", &quant_lugares[i]);

        printf("\tDigite o número do voo: ");
        scanf("%d", &num_voo[i]);

        printf("\tDigite a origem do voo: ");
        scanf("%s", origem[i]);

        printf("\tDigite o destino do voo: ");
        scanf("%s", destino[i]);

        printf("\n");
    }

    do {
        printf("-------------------------------------------------------------\n");
        printf("MENU DE OPÇÕES \n");
        printf("1. Consultar \n");
        printf("2. Efetuar reserva \n");
        printf("3. Sair \n\n");

        do { // O usuário não poderá digitar valores inválidos.
            printf("Digite a opção desejada: ");
            scanf("%d", &opc);
            if (opc <= 0 || opc > 3) {
                printf("Opção inválida. Por favor digite uma opção válida para prosseguir. \n\n");
            }
        } while (opc <= 0 || opc > 3);

        printf("-------------------------------------------------------------\n");

        switch (opc) {
            case 1:
                printf("VOCÊ DESEJA: \n");
                printf("1. Consultar por número de voo \n");
                printf("2. Consultar por origem \n");
                printf("3. Consultar por destino \n\n");
                printf("Digite a opção desejada: ");
                scanf("%d", &opc_consultar);
                switch (opc_consultar) {
                    case 1: {
                        int num;
                        printf("Digite o número do voo: ");
                        scanf("%d", &num);
                        for (i = 0; i < TAM; i++) {
                            if (num_voo[i] == num) {
                                printf("Voo %d: Origem: %s, Destino: %s, Lugares disponíveis: %d\n", num_voo[i], origem[i], destino[i], quant_lugares[i]);
                            }
                        }
                        break;
                    }
                    case 2: {
                        char ori[30];
                        printf("Digite a origem do voo: ");
                        scanf("%s", ori);
                        for (i = 0; i < TAM; i++) {
                            if (strcmpi(origem[i], ori) == 0) {
                                printf("Voo %d: Origem: %s, Destino: %s, Lugares disponíveis: %d\n", num_voo[i], origem[i], destino[i], quant_lugares[i]);
                            }
                        }
                        break;
                    }
                    case 3: {
                        char dest[30];
                        printf("Digite o destino do voo: ");
                        scanf("%s", dest);
                        for (i = 0; i < TAM; i++) {
                            if (strcmpi(destino[i], dest) == 0) {
                                printf("Voo %d: Origem: %s, Destino: %s, Lugares disponíveis: %d\n", num_voo[i], origem[i], destino[i], quant_lugares[i]);
                            }
                        }
                        break;
                    }
                }
                break;

            case 2: {
                int num, lugares;
                printf("Digite o número do voo para reserva: ");
                scanf("%d", &num);
                printf("Digite a quantidade de lugares para reservar: ");
                scanf("%d", &lugares);
                for (i = 0; i < TAM; i++) {
                    if (num_voo[i] == num) {
                        if (quant_lugares[i] >= lugares) {
                            quant_lugares[i] -= lugares;
                            printf("Reserva efetuada com sucesso! Lugares restantes no voo %d: %d\n", num_voo[i], quant_lugares[i]);
                        } else {
                            printf("Não há lugares suficientes disponíveis no voo %d.\n", num_voo[i]);
                        }
                    }
                }
                break;
            }

            case 3:
                printf("Programa encerrado. \n");
                break;
        }
    } while (opc != 3);

    return (EXIT_SUCCESS);
}