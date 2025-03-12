#include <stdio.h>
#include <math.h>

int main()
{
    double pes, polegadas, jarda, milhas;

    printf("Digite o numero de pes: ");
    scanf("%lf", &pes); // %lf for double & para acessar o endereço de memória

    polegadas = pes * 12;
    jarda = pes / 3;
    milhas = jarda / 1760.0;

    printf("Polegadas: %f\n", polegadas);
    printf("Jardas: %f\n", jarda);
    printf("Milhas: %f\n", milhas);

}