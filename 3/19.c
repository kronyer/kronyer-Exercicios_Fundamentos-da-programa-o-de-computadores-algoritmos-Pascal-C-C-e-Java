#include <stdio.h>

int main() {
    struct m_n {
        int m;
        int n;
    };

    int soma = 0;

    struct m_n valores;


    while (valores.m < valores.n) {

    scanf("%d %d", &valores.m, &valores.n);

        for (int i = valores.m; i <= valores.n; i++) {
            printf("%d ", i);
            soma += i;
            printf("%d\n", soma);
        }
        soma = 0;
    }

    return 0;
}