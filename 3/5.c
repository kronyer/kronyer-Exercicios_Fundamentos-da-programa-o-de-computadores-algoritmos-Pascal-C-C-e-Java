#include <stdio.h>

int main() {
    int i, j, expoente, num_termos;
    double fat, s;

    scanf("%d", &num_termos);

    s = 0;
    for (i = 1; i <= num_termos; i++) {
        fat = 1;
        for (j = 1; j <= i; j++) {
            fat *= j;
        }
        expoente = i + 1;

        if (i % 2 == 0) {
            s -= (double)fat / expoente;
        } else {
            s += (double)fat / expoente;
        }
    }

    printf("Resultado: %.15lf\n", s);

    return 0;
}

//????
