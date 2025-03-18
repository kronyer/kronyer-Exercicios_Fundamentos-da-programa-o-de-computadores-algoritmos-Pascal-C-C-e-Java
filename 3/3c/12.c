#include <stdbool.h>
#include <stdio.h>
bool eh_primo(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main (){
    int num_to_check;

    int qtd_primos;

    for (int i = 0 ; i < 10 ; i++){
        scanf("%d", &num_to_check);
        if (eh_primo(num_to_check)){
            qtd_primos += num_to_check;
        }
    }
}