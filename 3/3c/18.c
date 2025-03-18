#include <stdio.h>

int main() {
    int idade;
    char sexo;
    double salario;

    int qtd_pessoas = 0;
    double soma_salarios = 0;
    int menor_idade = 0;
    int maior_idade = 0;

    int qtd_mulheres_ate_200 = 0;

    struct PessoaMenorSalario {
        int idade;
        char sexo;
        double salario;
    } pessoa_menor_salario;

    do {
        scanf("%d %c %lf", &idade, &sexo, &salario);
        if (idade < 0) {
            break;
        }

        if (qtd_pessoas == 0) {
            pessoa_menor_salario.idade = idade;
            pessoa_menor_salario.sexo = sexo;
            pessoa_menor_salario.salario = salario;
            menor_idade = idade;
            maior_idade = idade;
        } else {
            if (salario < pessoa_menor_salario.salario) {
                pessoa_menor_salario.idade = idade;
                pessoa_menor_salario.sexo = sexo;
                pessoa_menor_salario.salario = salario;
            }
            if (idade < menor_idade) {
                menor_idade = idade;
            }
            if (idade > maior_idade) {
                maior_idade = idade;
            }
        }

        if (sexo == 'f' && salario <= 200) {
            qtd_mulheres_ate_200++;
        }

        soma_salarios += salario;
        qtd_pessoas++;

    } while (idade >= 0);

    printf("Quantidade de pessoas: %d\n", qtd_pessoas);
    printf("Soma dos salarios: %.2f\n", soma_salarios);
    printf("Menor idade: %d\n", menor_idade);
    printf("Maior idade: %d\n", maior_idade);
    printf("Quantidade de mulheres com salario ate 200: %d\n", qtd_mulheres_ate_200);
    printf("Pessoa com menor salario: Idade: %d, Sexo: %c, Salario: %.2f\n", pessoa_menor_salario.idade, pessoa_menor_salario.sexo, pessoa_menor_salario.salario);

    return 0;
}