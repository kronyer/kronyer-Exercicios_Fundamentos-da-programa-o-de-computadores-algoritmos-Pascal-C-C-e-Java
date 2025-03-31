#include <stdio.h>
int main (){
    const char* carros[5] = {"Fusca", "Gol", "Palio", "Celta", "Corsa"};
    double consumo[5] = {10.5, 12.5, 11.5, 10.8, 9.7};

    double menor_consumo = consumo[0];
    double maior_consumo = consumo[0];

    int menor_index = 0;
    int maior_index = 0;

    for (int i = 1; i < 5; i++) {
        if (consumo[i] < menor_consumo) {
            menor_consumo = consumo[i];
            menor_index = i;
        }
        if (consumo[i] > maior_consumo) {
            maior_consumo = consumo[i];
            maior_index = i;
        }
    }

    printf("O carro com menor consumo é o %s, com %.2lf km/l.\n", carros[menor_index], menor_consumo);
    printf("O carro com maior consumo é o %s, com %.2lf km/l.\n", carros[maior_index], maior_consumo);

    for (int i = 0; i < 5; i++) {
        printf("%s: %.2lf km/l\n", carros[i], consumo[i]);
        printf("Para fazer 1000km, são necessários %.2lf litros de combustível.\n", 1000 / consumo[i]);
    }
}