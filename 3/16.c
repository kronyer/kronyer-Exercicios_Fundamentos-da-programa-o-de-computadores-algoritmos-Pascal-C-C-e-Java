#include <stdio.h>

int main() {
    double base = 0;
    double altura = 0;
    double area;

    while (base <= 0) {
        printf("Digite a base do triangulo: ");
        scanf("%lf", &base);

        if (base <= 0) {
            printf("A base do triangulo deve ser maior que 0\n");
        }
    }

    while (altura <= 0) {
        printf("Digite a altura do triangulo: ");
        scanf("%lf", &altura);

        if (altura <= 0) {
            printf("A altura do triangulo deve ser maior que 0\n");
        }
    }

    area = (base * altura) / 2;

    printf("A area do triangulo é: %.2lf\n", area);

    return 0;
}