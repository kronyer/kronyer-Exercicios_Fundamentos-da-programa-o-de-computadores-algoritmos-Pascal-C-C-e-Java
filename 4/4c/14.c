#include <stdio.h>
int main (){

    int nome_arr[6][50];
    double nota1_arr[6];
    double nota2_arr[6];
    double media_arr[6];

    for (int i =0 ; i < 6; i++)
    {
        scanf("%s", nome_arr[i]);
        scanf("%lf", &nota1_arr[i]);
        scanf("%lf", &nota2_arr[i]);

        media_arr[i] = (nota1_arr[i] + nota2_arr[i]) / 2;
    }

    printf("Relatorio de notas\n");
    printf("Aluno\tNota 1\tNota 2\tMedia\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%s\t%.2lf\t%.2lf\t%.2lf\n", nome_arr[i], nota1_arr[i], nota2_arr[i], media_arr[i]);
    }
}