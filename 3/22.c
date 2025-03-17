#include <stdio.h>

int main (){
    int idade = -1;
    char sexo;
    char experiencia;


    int qtd_masculino = 0;
    int soma_idade_masculino_com_exp = 0;
    int qtd_masc_exp = 0;
    int homens_45 = 0;

    int qtd_feminino = 0;
    int mulheres_21 = 0;

    int idade_menor_entre_mulheres_exp = 0;

    while (idade != 0){
        printf("Digite a idade: ");
        scanf("%d", &idade);

        if (idade == 0){
            break;
        }

        printf("Digite o sexo: ");
        scanf(" %c", &sexo);

        printf("Digite a experiencia: ");
        scanf(" %c", &experiencia);

        if (sexo == 'F'){
            qtd_feminino++;

            

            if (experiencia == 'S'){
                if (idade_menor_entre_mulheres_exp == 0){
                    idade_menor_entre_mulheres_exp = idade;

                    if (idade < 21){
                        mulheres_21++;
                    }
                }
                else if (idade < idade_menor_entre_mulheres_exp){
                    idade_menor_entre_mulheres_exp = idade;
                }
            }
        }
        else if (sexo == 'M'){
            qtd_masculino++;
            
            if (experiencia == 'S'){
                soma_idade_masculino_com_exp += idade;
                qtd_masc_exp++;
            }

            if (idade > 45){
                homens_45++;
            }
        }
    }

    printf("Quantidade de mulheres: %d\n", qtd_feminino);
    printf("Quantidade de homens: %d\n", qtd_masculino);

    printf("Quantidade de mulheres com menos de 21 anos: %d\n", mulheres_21);

    printf("Porcentagem homens com mais de 45 anos: %.2lf\n", (double)homens_45 / qtd_masculino * 100);

    if (qtd_masc_exp == 0){
        printf("Nenhum homem com experiencia\n");
    }
    else{
        printf("Media de idade dos homens com experiencia: %.2lf\n", (double)soma_idade_masculino_com_exp / qtd_masc_exp);
    }

    if (idade_menor_entre_mulheres_exp == 0){
        printf("Nenhuma mulher com experiencia\n");
    }
    else{
        printf("Idade da mulher com experiencia mais nova: %d\n", idade_menor_entre_mulheres_exp);
    }


}