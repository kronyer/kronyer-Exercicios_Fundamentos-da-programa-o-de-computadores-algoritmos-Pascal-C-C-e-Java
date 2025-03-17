#include <stdio.h>
#include <stdbool.h>

// Função para verificar se um número é primo
bool eh_primo(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int num;
    double soma_par = 0;
    double soma_primos = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &num);
        if (num % 2 == 0) {
            soma_par += num;
        }
        if (eh_primo(num)) {
            soma_primos += num;
        }
    }

    printf("Soma dos pares: %.2f\n", soma_par);
    printf("Soma dos primos: %.2f\n", soma_primos);

    return 0;
}