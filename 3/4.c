#include <stdio.h>

int main() {
    int city_code, veichles_number, accident_number;

    int bigger_accident = 0;
    int bigger_accident_code = 0;

    int smaller_accident = 0;
    int smaller_accident_code = 0;

    int qtd_vehicles_all_cities = 0;

    int qtd_accidents_small_cities = 0;
    int qtd_small_cities = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%d %d %d", &city_code, &veichles_number, &accident_number);
        if (i == 0) {
            bigger_accident = accident_number;
            smaller_accident = accident_number;
            bigger_accident_code = city_code;
            smaller_accident_code = city_code;
        }
        qtd_vehicles_all_cities += veichles_number;
        if (accident_number > bigger_accident) {
            bigger_accident = accident_number;
            bigger_accident_code = city_code;
        }
        if (accident_number < smaller_accident) {
            smaller_accident = accident_number;
            smaller_accident_code = city_code;
        }

        if (veichles_number < 2000) {
            qtd_accidents_small_cities += accident_number;
            qtd_small_cities++;
        }
    }

    printf("Maior indice de acidentes: %d\n", bigger_accident_code);
    printf("%d\n", bigger_accident);

    printf("Menor indice de acidentes: %d\n", smaller_accident_code);
    printf("%d\n", smaller_accident);

    printf("Media de todas as cidades: %d\n", qtd_vehicles_all_cities / 5);

    if (qtd_small_cities > 0) {
        printf("Media de acidentes nas cidades com menos de 2000 veiculos: %d\n", qtd_accidents_small_cities / qtd_small_cities);
    } else {
        printf("Media de acidentes nas cidades com menos de 2000 veiculos: 0\n");
    }

    return 0;
}