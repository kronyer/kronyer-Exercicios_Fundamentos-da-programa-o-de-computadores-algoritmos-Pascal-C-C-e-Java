#include <stdio.h>
#include <math.h>

int main()
{
    double a_degrau, a_usuario, qtd_degraus;

    printf("Digite a altura do degrau em cm: ");
    scanf("%lf", &a_degrau);

    printf("Digite a altura do usuário em cm: ");
    scanf("%lf", &a_usuario);

    qtd_degraus = ceil(a_usuario / a_degrau);
    printf("Quantidade de degraus necessária: %.0lf\n", qtd_degraus);


}