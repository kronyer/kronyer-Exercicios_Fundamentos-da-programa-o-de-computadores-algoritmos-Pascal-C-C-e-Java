#include <stdio.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

/*
#ifndef M_PI: Esta diretiva de pré-processador verifica se M_PI não está definida.
 #ifndef significa "se não definido".
#define M_PI 3.14159265358979323846: Se M_PI não estiver definida,
 esta linha define M_PI com o valor de π (pi) com alta precisão.
#endif: Esta diretiva finaliza a condição #ifndef.
Este bloco de código garante que M_PI esteja definido com o valor de π, 
independentemente de a biblioteca math.h já ter definido ou não.
 Isso é útil para evitar redefinições e garantir que o valor de π esteja disponível para cálculos.
*/

int main()
{
    double ang, altura_parede, escada, radiano;

    printf("Digite o ângulo da escada em graus: ");
    scanf("%lf", &ang);

    printf("Digite a altura da parede em metros: ");
    scanf("%lf", &altura_parede);

    radiano = ang * M_PI / 180;
    escada = altura_parede / sin(radiano);
    printf("Comprimento da escada: %.2lf\n", escada);
}